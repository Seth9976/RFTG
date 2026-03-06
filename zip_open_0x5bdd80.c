// 函数名称: zip_open
// 虚拟地址: 0x5bdd80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**zip_open(uint8_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: void var_10
    void var_10
    zip_error_init(&var_10)
    int32_t* eax = zip_source_file_create(arg1, 0, 0, 0xffffffff, 0xffffffff, &var_10)
    
    if (eax == 0)
        int32_t eax_1 = zip_error_code_zip(&var_10)
        
        if (zip_error_system_type(&var_10) == 1)
            void* eax_3 = __errno()
            *eax_3 = zip_error_code_system(&var_10)
        
        if (arg3 != 0)
            *arg3 = eax_1
        
        zip_error_fini(&var_10)
        return 0
    
    int32_t** result = zip_open_from_source(eax, arg2, &var_10)
    
    if (result != 0)
        zip_error_fini(&var_10)
        return result
    
    zip_source_free(eax)
    int32_t eax_7 = zip_error_code_zip(&var_10)
    
    if (zip_error_system_type(&var_10) == 1)
        void* eax_9 = __errno()
        *eax_9 = zip_error_code_system(&var_10)
    
    if (arg3 != 0)
        *arg3 = eax_7
    
    zip_error_fini(&var_10)
    return 0
}

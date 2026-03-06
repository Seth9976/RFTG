// 函数名称: sub_4cfca0
// 虚拟地址: 0x4cfca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4cfca0(void* arg1 @ esi, void** arg2)
{
    // 第一条实际指令: int32_t** var_20
    int32_t** var_20
    char eax = sub_4cd4e0(&var_20, arg1)
    
    if (eax == 0)
        return eax
    
    int32_t ebx
    ebx.b = sub_4cfa80(arg2, arg1, &var_20, arg2)
    int32_t** eax_3 = var_20
    
    if (eax_3 != 0)
        zip_close(eax_3)
        void* var_1c
        zip_fclose(var_1c)
    
    int32_t* var_c
    sub_5a8c61(var_c)
    int32_t eax_4
    eax_4.b = ebx.b
    return eax_4
}

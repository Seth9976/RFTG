// 函数名称: sub_5bae5d
// 虚拟地址: 0x5bae5d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5bae5d(char* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_14
    void var_14
    sub_5a73dd(&var_14, arg4)
    void* var_c
    char var_8
    
    if (arg3 == 0)
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0
    
    if (arg1 == 0 || arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    if (arg3 u<= 0x7fffffff)
        void* var_10
        uint32_t result
        
        if (*(var_10 + 8) == 0)
            result = sub_5bb79a(arg1, arg2, arg3, arg4)
        label_5baf2e:
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return result
        
        enum COMPARESTRING_RESULT eax_6 =
            sub_5ac772(&var_14, *(var_10 + 0xc), 0x1001, arg1, arg3, arg2, arg3, *(var_10 + 4))
        
        if (eax_6 != 0)
            result = eax_6 - 2
            goto label_5baf2e
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0x7fffffff
}

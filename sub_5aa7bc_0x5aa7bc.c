// 函数名称: sub_5aa7bc
// 虚拟地址: 0x5aa7bc
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5aa7bc(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi = arg1
    void* var_30
    sub_5a73dd(&var_30, arg2)
    long double result
    void* var_28
    char var_24
    
    if (esi != 0)
        while (true)
            void* eax_4 = var_30
            int32_t eax_6
            
            if (*(eax_4 + 0xac) s<= 1)
                eax_6 = zx.d(*(*(eax_4 + 0xc8) + (zx.d(*esi) << 1))) & 8
            else
                eax_6 = sub_5aecab(zx.d(*esi), 8, &var_30)
            
            if (eax_6 == 0)
                break
            
            esi = &esi[1]
        
        void var_20
        result = fconvert.t(*(sub_5b56ac(&var_20, esi, &var_30) + 0x10))
        
        if (var_24 != 0)
            *(var_28 + 0x70) &= 0xfffffffd
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_24 != 0)
            *(var_28 + 0x70) &= 0xfffffffd
        
        result = float.t(0)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

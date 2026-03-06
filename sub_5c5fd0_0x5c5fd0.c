// 函数名称: sub_5c5fd0
// 虚拟地址: 0x5c5fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5c5fd0(int32_t* arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_14
    int32_t eax_2
    int32_t edx
    eax_2, edx = zip_source_read(arg2, &var_14, 0xc, 0)
    
    if (edx s<= 0 && (edx s< 0 || eax_2 u< 0))
        sub_5bf050(arg1, arg2)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (eax_2 != 0xc || edx != 0)
        zip_error_set(arg1, 0x11, 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    sub_5c5f10(eax_2, &var_14, &var_14, arg1, &var_14, &var_14, 0xc, 0, 0)
    void var_5c
    
    if (zip_source_stat(arg2, &var_5c) s>= 0)
        void var_1c
        void* var_64_2 = &var_1c
        int16_t var_18
        int16_t* var_68_2 = &var_18
        int16_t* var_34
        int16_t* var_30
        sub_5bfc90(var_34, var_30)
        int32_t var_2c
        char var_9
        
        if (var_9 != (var_2c u>> 0x18).b && var_9 != (zx.d(var_18) u>> 8).b)
            zip_error_set(arg1, 0x1b, 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

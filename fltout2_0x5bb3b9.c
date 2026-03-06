// 函数名称: __fltout2
// 虚拟地址: 0x5bb3b9
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*__fltout2(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_40 = edi
    int32_t var_34
    void arg_4
    sub_5bb306(&var_34, &arg_4)
    int16_t var_24
    int16_t* var_44_1 = &var_24
    char var_48_1 = 0
    int32_t var_4c = 0x11
    int32_t var_58 = var_34
    uint32_t var_54
    uint32_t* edi_1 = &var_54
    void var_30
    void* esi = &var_30
    *edi_1 = *esi
    edi_1[1].w = *(esi + 4)
    int16_t var_50
    arg1[2] = sub_5bbb78(var_58, var_54, var_50, var_4c, var_48_1, var_44_1)
    char var_22
    *arg1 = sx.d(var_22)
    arg1[1] = sx.d(var_24)
    void var_20
    void* var_5c = &var_20
    
    if (sub_5b04a4(arg2, arg3, var_5c) != 0)
        __builtin_memset(&var_54, 0, 0x14)
        sub_5ad34e()
        noreturn
    
    arg1[3] = arg2
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

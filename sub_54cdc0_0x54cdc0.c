// 函数名称: sub_54cdc0
// 虚拟地址: 0x54cdc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_54cdc0(float* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_6c
    sub_54caa0(&var_6c, arg1)
    void var_84
    int32_t* eax_3 = sub_4d84a0(&var_84, &data_8409a8, &var_6c, &var_84)
    int32_t edx = eax_3[1]
    *arg2 = *eax_3
    int32_t ecx_3 = eax_3[2]
    arg2[1] = edx
    int32_t edx_1 = eax_3[3]
    arg2[2] = ecx_3
    int32_t ecx_4 = eax_3[4]
    arg2[3] = edx_1
    int32_t edx_2 = eax_3[5]
    arg2[4] = ecx_4
    arg2[5] = edx_2
    void var_60
    float* edi_1 = &var_60
    int32_t i_1 = 7
    int32_t i
    
    do
        sub_4d83b0(edi_1, arg2)
        edi_1 = &edi_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg2
}

// 函数名称: sub_470f20
// 虚拟地址: 0x470f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_470f20(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void var_3c
    void var_3c
    int32_t eax_1 = __security_cookie ^ &var_3c
    void* eax_2 = sub_46b2b0(arg2)
    int32_t eax_3 = *(eax_2 + 0x1f84)
    
    if (eax_3 == 0 || eax_3 == 1)
        sub_46db50(arg2, arg3, arg4, 1)
        *(eax_2 + 8) = 0
        int32_t eax_6
        eax_6.b = 1
        sub_5a6aba(eax_1 ^ &var_3c)
        return 1
    
    void* edx = data_27e7a40
    *(eax_2 + 0x1c) = 0x1a
    *(eax_2 + 0x1f88) = arg3
    *(eax_2 + 0x55c) = arg4
    void* esi_1 = *(edx + 0x548)
    
    if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        sub_4d66f0(&var_3c)
    
    *(esi_1 + 0x210) = 0
    *(esi_1 + 0x2c078) = 0
    int32_t eax_5
    eax_5.b = 1
    *(esi_1 + 0x214) = 1
    *(eax_2 + 8) = 1
    eax_5.b = 0
    sub_5a6aba(eax_1 ^ &var_3c)
    return 0
}

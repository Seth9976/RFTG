// 函数名称: sub_4707b0
// 虚拟地址: 0x4707b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4707b0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ edi, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg2)
    int32_t arg_4
    *(eax_2 + 0x564) = arg_4
    *(eax_2 + 0x1c) = 0x14
    sub_46aca0(eax_2 + 0x1f3c, sub_46aca0(eax_2 + 0xaa4, edx, arg6, *arg3), &arg_4, 1)
    int32_t eax_6 = arg5
    *(eax_2 + 0xa98) = arg_4
    *(eax_2 + 0xa9c) = eax_6
    *(eax_2 + 0x1a08) = *arg3
    *(eax_2 + 0x554) = arg4
    *(eax_2 + 0x558) = arg7
    
    if (arg4 s> 0)
        void* eax_8 = *(data_27e7a40 + 0x548)
        *(eax_8 + 0x210) = 0
        *(eax_8 + 0x2c078) = 1
        *(eax_8 + 0x214) = 0
        sub_5a6aba(eax_1 ^ &var_40)
        return eax_8
    
    void* esi_2 = *(data_27e7a40 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        eax_6 = sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 0
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &var_40)
    return eax_6
}

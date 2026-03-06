// 函数名称: sub_470d30
// 虚拟地址: 0x470d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_470d30(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ edi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg2)
    *(eax_2 + 0x1c) = 0x17
    *(eax_2 + 0x1a08) = *arg3
    sub_46aca0(eax_2 + 0xaa4, edx, arg5, *arg3)
    int32_t edx_1 = *arg4
    *(eax_2 + 0x1f30) = edx_1
    void arg_c
    sub_46aca0(eax_2 + 0x1f3c, sub_46aca0(eax_2 + 0x1a10, edx_1, arg6, *arg4), &arg_c, 1)
    void* ecx_4 = data_27e7a40
    *(eax_2 + 0x554) = 0
    *(eax_2 + 0x558) = 1
    void* esi_2 = *(ecx_4 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 2
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 0
    sub_5a6aba(eax_1 ^ &var_40)
    return 0
}

// 函数名称: sub_46f620
// 虚拟地址: 0x46f620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46f620(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ edi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg3)
    *(eax_2 + 0x1c) = 8
    int32_t edx_1 = sub_46aca0(eax_2 + 0xaa4, edx, arg5, *arg4)
    *(eax_2 + 0x1a08) = *arg4
    *(eax_2 + 0x558) = 1
    *(eax_2 + 0x554) = 0
    int32_t arg_8
    sub_46aca0(eax_2 + 0x1f3c, edx_1, &arg_8, 1)
    int32_t result = arg6
    void* ecx_3 = data_27e7a40
    *(eax_2 + 0xa98) = arg_8
    *(eax_2 + 0xa9c) = result
    void* esi_2 = *(ecx_3 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        result = sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 2
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 0
    sub_5a6aba(eax_1 ^ &var_40)
    return result
}

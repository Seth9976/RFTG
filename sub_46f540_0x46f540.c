// 函数名称: sub_46f540
// 虚拟地址: 0x46f540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_46f540(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: void var_10
    void var_10
    int32_t eax_1 = __security_cookie ^ &var_10
    
    if (*(arg4 + 0x1ec2) != 0)
        int32_t var_1c = 0
        sub_469e10(arg4, arg2, 3, 0, sub_46b2b0(arg2) + 0x1f94, 1, 0, 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_4
        eax_4.b = 1
        sub_5a6aba(eax_1 ^ &var_10)
        return eax_4
    
    void* eax_5
    int32_t edx
    eax_5, edx = sub_46b2b0(arg2)
    *(eax_5 + 0x1c) = 9
    int32_t edx_1 = sub_46aca0(eax_5 + 0xaa4, edx, arg5, *arg3)
    *(eax_5 + 0x1a08) = *arg3
    *(eax_5 + 0x558) = 1
    *(eax_5 + 0x554) = 1
    void arg_8
    sub_46aca0(eax_5 + 0x1f3c, edx_1, &arg_8, 1)
    void* eax_9 = *(data_27e7a40 + 0x548)
    *(eax_9 + 0x2c078) = 1
    *(eax_9 + 0x210) = 0
    *(eax_9 + 0x214) = 0
    eax_9.b = 0
    sub_5a6aba(eax_1 ^ &var_10)
    return eax_9
}

// 函数名称: sub_5d41b0
// 虚拟地址: 0x5d41b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d41b0(int32_t arg1, int32_t arg2, uint32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    int32_t __saved_esi = 8
    int32_t* eax = sub_5d0ac0()
    
    if (eax == 0)
        sub_5cd050(eax)
        return 0xffffffff
    
    eax[1] = sub_68656e
    *eax = arg5
    var_8 = 0
    HANDLE eax_1 = sub_686633(nullptr, 0, sub_5d41a0, eax, THREAD_CREATE_RUN_IMMEDIATELY, &var_8)
    *(arg4 + 4) = eax_1
    
    if (eax_1 != 0)
        return 0
    
    sub_5cce60("Not enough resources to create thread")
    return 0xffffffff
}

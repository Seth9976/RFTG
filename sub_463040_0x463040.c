// 函数名称: sub_463040
// 虚拟地址: 0x463040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_463040(int32_t arg1, char arg2)
{
    // 第一条实际指令: void* ecx = data_27e7a40
    void* ecx = data_27e7a40
    *(*(ecx + 0x548) + 0x2c07a) = arg2
    
    if (*(ecx + 0x548) == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_2 = *(ecx + 0x548)
    *(eax_2 + 0x43350) = sx.d(*(*(eax_2 + 0x45844) + 0x1ec2))
    void* eax_3 = *(ecx + 0x548)
    void* var_8 = ecx
    ecx.b = *(eax_3 + 0x2c07a) == 0
    sub_4fa8a0(*(eax_3 + 0xc), zx.d(ecx.b), fconvert.s(fconvert.t(-1f)))
    void* eax_5 = *(data_27e7a40 + 0x548)
    sub_4fa7d0(*(eax_5 + 0xc), *(eax_5 + 0x2c07a) == 0)
    void* eax_7 = *(data_27e7a40 + 0x548)
    int80_t result =
        sub_4fa8a0(*(eax_7 + 0x10), zx.d(*(eax_7 + 0x2c07a) == 0), fconvert.s(fconvert.t(-1f)))
    void* eax_9 = *(data_27e7a40 + 0x548)
    sub_4fa7d0(*(eax_9 + 0x10), *(eax_9 + 0x2c07a) == 0)
    return result
}

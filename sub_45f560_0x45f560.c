// 函数名称: sub_45f560
// 虚拟地址: 0x45f560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_45f560(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    
    if (edx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx_2 = *(edx + 0x45844) + arg3 * 0x14
    void* ecx_1 = *(edx_2 + 0x46c)
    arg1[1] = sx.d(*(ecx_1 + 6))
    *arg1 = sx.d(*(ecx_1 + 7))
    int32_t ecx_2 = *(ecx_1 + 0x10)
    arg1[2] = sx.d(*(ecx_1 + 0xe))
    bool cond:0 = *(edx_2 + 0x472) s> 0
    arg1[4] = ecx_2 u>> 1 & 1
    int32_t ecx_4
    ecx_4.b = cond:0
    arg1[3] = ecx_2 & 1
    arg1[5].b = ecx_4.b
}

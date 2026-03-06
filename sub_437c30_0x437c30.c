// 函数名称: sub_437c30
// 虚拟地址: 0x437c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_437c30()
{
    // 第一条实际指令: void* eax = *(data_27e7a40 + 0x548)
    void* eax = *(data_27e7a40 + 0x548)
    int32_t ecx = *(eax + 0x2c024)
    
    if (ecx s< 0x800)
        *(eax + 0x2c024) = ecx + 1
        sub_5abfc0((ecx << 6) + eax + 0xc024, 0, 0x40)
        return (ecx << 6) + eax + 0xc024
    
    sub_4c5870("gui->numUIActions < MAX_UIACTIONS", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2c21, 
        "UIActionQueueAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

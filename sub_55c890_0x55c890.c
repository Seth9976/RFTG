// 函数名称: sub_55c890
// 虚拟地址: 0x55c890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_55c890(void* arg1)
{
    // 第一条实际指令: D3DPERF_BeginEvent(0xffffffff, u"Begin Scene")
    D3DPERF_BeginEvent(0xffffffff, u"Begin Scene")
    int32_t* eax = *(arg1 + 8)
    int32_t result = (*(*eax + 0xa4))(eax)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

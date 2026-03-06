// 函数名称: sub_468ef0
// 虚拟地址: 0x468ef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_468ef0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t eax = *(arg2 + 4)
    
    if (eax == 0xf425a)
        return sub_4689e0(arg1, arg2)
    
    if (eax == 0xf425b)
        return sub_468d10(arg1, arg2)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGServer.cpp", 0x15e, "RFTGServerHandleAsyncMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_4b62e0
// 虚拟地址: 0x4b62e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b62e0()
{
    // 第一条实际指令: sub_4b91a0(data_27e7a44 + 0x1c)
    sub_4b91a0(data_27e7a44 + 0x1c)
    sub_4b9210(data_27e7a44 + 0x38)
    sub_4b9280(data_27e7a44 + 0x54)
    sub_4b8fc0()
    sub_4d2f60()
    void* result = data_27e7fd0
    
    if (*(result + 0x2a) == 0 || *(data_27e7a60 + 0xc) != 0)
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGServer.cpp", 0x17, "RFTGServerInit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_519500
// 虚拟地址: 0x519500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_519500()
{
    // 第一条实际指令: sub_558630()
    sub_558630()
    void*** eax = operator new(8)
    
    if (eax == 0)
        eax = nullptr
    else
        *eax = &data_892bd8
        eax[1] = 0
    
    data_27e7fd8 = eax
    int32_t result = data_3078808
    
    if (result u> 3)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsApp.cpp", 0x3f, "WindowsInitInterfaces")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    switch (result)
        case 0
            return result
        case 1
            return sub_5448e0() __tailcall
        case 2
            return sub_559680() __tailcall
        case 3
            return sub_55d670() __tailcall
}

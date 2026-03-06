// 函数名称: sub_401100
// 虚拟地址: 0x401100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_401100()
{
    // 第一条实际指令: void* esi = data_8c86e8
    void* esi = data_8c86e8
    void* eax = nullptr
    void* ecx_1 = data_8c86ec * 0x318b10 + esi
    
    while (true)
        if (eax != 0)
            eax += 0x318b10
        else
            eax = esi
        
        if (eax u>= ecx_1)
            break
        
        while (true)
            if ((*(eax + 0x318b08) & 0xffff0000) != 0)
                if (eax + 8 != data_27e7a40)
                    break
                
                return eax + 0x3188f0
            
            eax += 0x318b10
            
            if (eax u>= ecx_1)
                goto label_40115c
    
    label_40115c:
    sub_4c5870("Halt", &data_83f3d3, "..\code\Bots.cpp", 0x57, "BotGameSettings")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

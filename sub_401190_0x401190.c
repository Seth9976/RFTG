// 函数名称: sub_401190
// 虚拟地址: 0x401190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_401190(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* result_1 = data_8c86e8
    void* result_1 = data_8c86e8
    void* result = nullptr
    void* ecx_1 = data_8c86ec * 0x318b10 + result_1
    
    while (true)
        if (result != 0)
            result += 0x318b10
        else
            result = result_1
        
        if (result u>= ecx_1)
            break
        
        while (true)
            if ((*(result + 0x318b08) & 0xffff0000) != 0)
                if (result + 8 != arg1)
                    break
                
                return result
            
            result += 0x318b10
            
            if (result u>= ecx_1)
                goto label_4011ea
    
    label_4011ea:
    sub_4c5870("Halt", &data_83f3d3, "..\code\Bots.cpp", 0xd8, "BotFromClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

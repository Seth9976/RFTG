// 函数名称: sub_436b30
// 虚拟地址: 0x436b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_436b30()
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    void* result = nullptr
    
    while (true)
        if (result != 0)
            result += 0xb0
        else
            result = *(edx + 0x43960)
        
        int32_t ecx_3 = *(edx + 0x43964) * 0xb0 + *(edx + 0x43960)
        
        if (result u>= ecx_3)
            break
        
        while (true)
            if ((*(result + 0xac) & 0xffff0000) != 0)
                if (*result != 0)
                    break
                
                int32_t ecx_5 = *(result + 0x7c)
                
                if (ecx_5 s>= 0x3e8)
                    break
                
                if (edx != 0)
                    if (*(*(*(edx + 0x45844) + ecx_5 * 0x14 + 0x46c) + 4) != 0x9d)
                        break
                    
                    return result
                
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result += 0xb0
            
            if (result u>= ecx_3)
                goto label_436b9a
    
    label_436b9a:
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x29c1, "GetScavangers")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

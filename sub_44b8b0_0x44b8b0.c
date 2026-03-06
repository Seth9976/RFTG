// 函数名称: sub_44b8b0
// 虚拟地址: 0x44b8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_44b8b0(int32_t arg1 @ edi)
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
            return 0
        
        while ((*(result + 0xac) & 0xffff0000) == 0)
            result += 0xb0
            
            if (result u>= ecx_3)
                return 0
        
        if (*result == 0)
            int32_t ecx_5 = *(result + 0x7c)
            
            if (ecx_5 s<= 0x1f4)
                if (edx == 0)
                    break
                
                if (sx.d(*(*(*(edx + 0x45844) + ecx_5 * 0x14 + 0x46c) + 4)) == arg1)
                    return result
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

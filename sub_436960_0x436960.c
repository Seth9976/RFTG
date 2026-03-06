// 函数名称: sub_436960
// 虚拟地址: 0x436960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_436960(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx = *(eax_1 + 0x45844)
    int32_t result
    
    if (*(ecx + 0x1ec2) != 0)
        result = sx.d(*(arg1 * 0xb4 + ecx + 0x46))
        
        if (result == 0xffffffff)
        label_436a06:
            result.b = 0
            return result
        
        while (true)
            int32_t edx_2 = result * 5
            
            if (*(*(ecx + (edx_2 << 2) + 0x46c) + 4) == 0x9d && *(ecx + (edx_2 << 2) + 0x467) == 3)
                break
            
            result = sx.d(*(ecx + ((result * 5 + 0x11d) << 2)))
            
            if (result == 0xffffffff)
                result.b = 0
                return result
    else
        void* edi_1 = nullptr
        
        while (true)
            void* ecx_2 = *(data_27e7a40 + 0x548)
            
            if (edi_1 != 0)
                edi_1 += 0xb0
            else
                edi_1 = *(ecx_2 + 0x43960)
            
            result = *(ecx_2 + 0x43964) * 0xb0 + *(ecx_2 + 0x43960)
            
            if (edi_1 u>= result)
                goto label_436a06
            
            while ((*(edi_1 + 0xac) & 0xffff0000) == 0)
                edi_1 += 0xb0
                
                if (edi_1 u>= result)
                    goto label_436a06
            
            if (*edi_1 == 0)
                int32_t eax_5 = *(edi_1 + 0x7c)
                
                if (eax_5 s< 0x3e8)
                    if (ecx_2 == 0)
                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0xcc, "GetGame")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_6 = *(ecx_2 + 0x45844)
                    
                    if (*(*(eax_6 + eax_5 * 0x14 + 0x46c) + 4) == 0x9d)
                        if (arg1 != 0xffffffff)
                            result = *sub_46b2b0(arg1)
                        else
                            result = eax_6 | arg1
                        
                        if (*(edi_1 + 0x58) == result)
                            if (*(edi_1 + 0x5c) == 3)
                                break
    
    result.b = 1
    return result
}

// 函数名称: sub_4266b0
// 虚拟地址: 0x4266b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4266b0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_1 = *(*arg1 + 0x7c)
    int32_t eax_1 = *(*arg1 + 0x7c)
    
    if (eax_1 s< 0)
        sub_4c5870("gfx0.gfx->cidx >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1678, "HandSort")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_1 s> 0x3e8)
        sub_4c5870("gfx0.gfx->cidx <= 1000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1679, "HandSort")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_4 = *(*arg2 + 0x7c)
    
    if (eax_4 s< 0)
        sub_4c5870("gfx1.gfx->cidx >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x167a, "HandSort")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_4 s> 0x3e8)
        sub_4c5870("gfx1.gfx->cidx <= 1000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x167b, "HandSort")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_7 = sub_418a10()
    void* ebx = *arg2
    int32_t edi_1 = *(ebx + 0x7c)
    void* esi_1 = *(eax_7 + *(*arg1 + 0x7c) * 0x14 + 0x46c)
    int32_t eax_8 = sub_418a10()
    int32_t ecx_2
    ecx_2.b = *(esi_1 + 6)
    void* result = *(eax_8 + edi_1 * 0x14 + 0x46c)
    int32_t edx_1
    edx_1.b = *(result + 6)
    
    if (ecx_2.b s>= edx_1.b)
        if (ecx_2.b s> edx_1.b)
            result.b = 0
            return result
        
        ecx_2.b = *(esi_1 + 7)
        edx_1.b = *(result + 7)
        
        if (ecx_2.b s>= edx_1.b)
            if (ecx_2.b s> edx_1.b)
                result.b = 0
                return result
            
            int32_t ecx_4 = *(result + 0x10) & 0x19
            int32_t edx_3 = *(esi_1 + 0x10) & 0x19
            
            if (edx_3 u<= ecx_4)
                if (edx_3 u< ecx_4)
                    result.b = 0
                    return result
                
                ecx_4.b = *(esi_1 + 0xe)
                result.b = *(result + 0xe)
                
                if (ecx_4.b s<= result.b)
                    if (ecx_4.b s< result.b)
                        result.b = 0
                        return result
                    
                    void* ecx_5 = *arg1
                    result = *(ecx_5 + 0x7c)
                    
                    if (result s>= edi_1)
                        if (result s<= edi_1)
                            return neg.d(sbb.d(result, result, ecx_5 u< ebx))
                        
                        result.b = 0
                        return result
    
    result.b = 1
    return result
}

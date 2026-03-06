// 函数名称: sub_463330
// 虚拟地址: 0x463330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_463330(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    void* result
    int32_t edx
    int32_t edx_1
    result, edx_1 = sub_4637c0(eax, edx, arg1, 0)
    
    if (*result s<= 0)
        return result
    
    void* eax_1 = sub_4637c0(result, edx_1, arg1, 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(*eax_1)
    int32_t ebx_2 = ((edx_2 & 3) + eax_3) s>> 2
    int32_t i = 0
    int32_t i_2 = 0
    
    if (ebx_2 != 0)
        int32_t eax_7
        int32_t edx_4
        
        do
            if (i s>= ebx_2)
                sub_4c5870("choice < playerGamestate.logLengthBytesCurrent / 4", &data_83f3d3, 
                    "..\code\RFTGClient.cpp", 0x68a9, "RftGUndo")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_4 = *(eax_1 + (i << 2) + 0x10)
            i_2 = i
            int32_t eax_5
            
            if (eax_4 s>= 0 && eax_4 s<= 0x64)
                eax_5 = *(eax_1 + ((i + eax_4 + 3) << 2) + 8)
            
            if (eax_4 s< 0 || eax_4 s> 0x64 || eax_5 s< 0 || eax_5 s> 0x64)
                sub_49b2a0()
                noreturn
            
            i = eax_5 + i + eax_4 + 3 + 1
            edx_4:eax_7 = sx.q(*eax_1)
        while (i != (eax_7 + (edx_4 & 3)) s>> 2)
    
    int32_t i_1 = i
    int32_t i_3 = i_2
    sub_4c5680("undo prevChoice=%d, choice=%d")
    int32_t eax_11
    int32_t edx_6
    edx_6:eax_11 = sx.q(*(eax_1 + 4))
    int32_t var_20_1 = (eax_11 + (edx_6 & 3)) s>> 2
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = sx.q(*eax_1)
    int32_t var_24_1 = (eax_15 + (edx_8 & 3)) s>> 2
    sub_4c5680("undo current/4=%d, total/4=%d")
    int32_t eax_18 = i_2 << 2
    
    if (eax_18 s>= *eax_1)
        sub_4c5870("prevChoice * 4 < playerGamestate.logLengthBytesCurrent", &data_83f3d3, 
            "..\code\RFTGClient.cpp", 0x68b1, "RftGUndo")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *eax_1 = eax_18
    sub_4632e0(eax_1, 0)
    void* ecx_2 = *(data_27e7a40 + 0x548)
    int32_t edx_10 = 0
    int32_t var_8_1 = 0
    
    if (ecx_2 != 0)
        int32_t esi_2 = 0
        
        while (true)
            result = *(ecx_2 + 0x45844)
            
            if (edx_10 s>= sx.d(*(result + 0x458)))
                return result
            
            if (ecx_2 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_20_2 = *(esi_2 + result + 0xc4)
            int32_t var_24_2 = *(esi_2 + result + 0xd0)
            int32_t var_28_1 = *(esi_2 + result + 0xc8)
            int32_t var_2c_1 = edx_10
            sub_4c5680("undo p=%d pos=%d unread=%d size=%d")
            int32_t eax_23 = *(esi_2 + result + 0xc8)
            void* edx_11 = data_27e7a40
            var_8_1 += 1
            *(esi_2 + result + 0xd0) = eax_23
            *(esi_2 + result + 0xc4) = eax_23
            ecx_2 = *(edx_11 + 0x548)
            esi_2 += 0xb4
            
            if (ecx_2 == 0)
                break
            
            edx_10 = var_8_1
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

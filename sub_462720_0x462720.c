// 函数名称: sub_462720
// 虚拟地址: 0x462720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_462720()
{
    // 第一条实际指令: int32_t result = data_27e7a40
    int32_t result = data_27e7a40
    
    if (*(result + 0x2c4960) == 0)
        return result
    
    if (data_27c05dc != 0)
        sub_4c5870("numObjs == 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6796, 
            "RftGClientDrawObjsAdd")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_1 = sub_418a10()
    int32_t i = 0
    int32_t edx
    
    if (*(eax_1 + 0x458) s> 0)
        do
            int32_t eax_2 = data_27c05dc
            
            if (eax_2 s> 0x800)
                sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, 
                    "AddDrawObj")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_27c05dc = eax_2 + 1
            (&data_bf80d0)[eax_2 * 5] = 0
            *(eax_2 * 0x14 + 0xbf80d8) = i
            edx = sub_4623b0(i, edx, &(&data_bf80d0)[eax_2 * 5])
            i += 1
        while (i s< sx.d(*(eax_1 + 0x458)))
    
    int32_t eax_5 = data_27c05dc
    
    if (eax_5 s> 0x800)
        sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, "AddDrawObj")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_27c05dc = eax_5 + 1
    (&data_bf80d0)[eax_5 * 5] = 8
    *(eax_5 * 0x14 + 0xbf80d8) = 0
    int32_t edx_1 = sub_4623b0(0, edx, &(&data_bf80d0)[eax_5 * 5])
    int32_t eax_9 = data_27c05dc
    
    if (eax_9 s> 0x800)
        sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, "AddDrawObj")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_27c05dc = eax_9 + 1
    (&data_bf80d0)[eax_9 * 5] = 9
    *(eax_9 * 0x14 + 0xbf80d8) = 0
    sub_4623b0(0, edx_1, &(&data_bf80d0)[eax_9 * 5])
    void* i_1 = nullptr
    label_4628b2:
    void* edx_4 = data_27e7a40
    void* ecx_8 = *(edx_4 + 0x548)
    
    if (i_1 != 0)
        i_1 += 0xb0
    else
        i_1 = *(ecx_8 + 0x43960)
    
    for (; i_1 u< *(ecx_8 + 0x43964) * 0xb0 + *(ecx_8 + 0x43960); i_1 += 0xb0)
        if ((*(i_1 + 0xac) & 0xffff0000) != 0)
            int32_t eax_22 = data_27c05dc
            
            if (eax_22 s> 0x800)
                sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, 
                    "AddDrawObj")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_27c05dc = eax_22 + 1
            int32_t eax_24 = 0
            (&data_bf80d0)[eax_22 * 5] = 2
            *(eax_22 * 0x14 + &data_bf80d4) = i_1
            
            if (*i_1 == 0)
                eax_24, edx_4 = sub_426870(i_1, 0)
                *(i_1 + 0xa4) = eax_24
            
            if (*i_1 == 1)
                eax_24, edx_4 = sub_426870(i_1, 0)
                *(i_1 + 0xa4) = eax_24
            
            sub_4623b0(eax_24, edx_4, &(&data_bf80d0)[eax_22 * 5])
            int32_t eax_26
            int32_t edx_5
            eax_26, edx_5 = sub_446520(i_1)
            
            if (eax_26 == 0)
                goto label_4628b2
            
            if (eax_26 == 2)
                goto label_4628b2
            
            if (eax_26 == 6)
                goto label_4628b2
            
            if (eax_26 == 9)
                goto label_4628b2
            
            void* eax_30 = *(data_27e7a40 + 0x548)
            
            if (*(eax_30 + 0xbfe4) != 0 && *(eax_30 + 0xbfe5) == 1)
                int32_t eax_32
                eax_32, edx_5 = sub_446520(sub_463f60(eax_30 + 0x43960, *(eax_30 + 0xbfd0)))
                
                if (eax_32 != 0)
                    goto label_4628b2
            
            int32_t eax_33 = data_27c05dc
            
            if (eax_33 s> 0x800)
                sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, 
                    "AddDrawObj")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_27c05dc = eax_33 + 1
            int32_t eax_35 = 0
            (&data_bf80d0)[eax_33 * 5] = 1
            *(eax_33 * 0x14 + &data_bf80d4) = i_1
            
            if (*i_1 == 0)
                eax_35, edx_5 = sub_426870(i_1, 0)
                *(i_1 + 0xa4) = eax_35
            
            sub_4623b0(eax_35, edx_5, &(&data_bf80d0)[eax_33 * 5])
            goto label_4628b2
    
    if (*(edx_4 + 0x2c4960) == 1 && data_27c0720 == 1)
        int32_t ecx_9 = data_27c076c
        int32_t eax_16 = *(data_27e7a54 + 0x204) * 3
        edx_4 = *((eax_16 << 3) + &data_8c77ec) - 1
        
        if (ecx_9 s< edx_4 && *((&data_8c77e8)[eax_16 * 2] + (ecx_9 << 3)) != 0x48)
            int32_t eax_20 = data_27c05dc
            
            if (eax_20 s> 0x800)
                sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, 
                    "AddDrawObj")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_27c05dc = eax_20 + 1
            (&data_bf80d0)[eax_20 * 5] = 4
            edx_4 = sub_4623b0(0, edx_4, &(&data_bf80d0)[eax_20 * 5])
    
    int32_t eax_39 = data_27c05dc
    
    if (eax_39 s> 0x800)
        sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, "AddDrawObj")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_27c05dc = eax_39 + 1
    (&data_bf80d0)[eax_39 * 5] = 3
    int32_t edx_6 = sub_4623b0(0, edx_4, &(&data_bf80d0)[eax_39 * 5])
    int32_t eax_42 = data_27c05dc
    
    if (eax_42 s> 0x800)
        sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, "AddDrawObj")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_27c05dc = eax_42 + 1
    (&data_bf80d0)[eax_42 * 5] = 5
    int32_t edx_7 = sub_4623b0(0, edx_6, &(&data_bf80d0)[eax_42 * 5])
    int32_t eax_45 = data_27c05dc
    
    if (eax_45 s> 0x800)
        sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, "AddDrawObj")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_27c05dc = eax_45 + 1
    (&data_bf80d0)[eax_45 * 5] = 7
    int32_t edx_8 = sub_4623b0(0, edx_7, &(&data_bf80d0)[eax_45 * 5])
    int32_t eax_48 = data_27c05dc
    
    if (eax_48 s<= 0x800)
        data_27c05dc = eax_48 + 1
        (&data_bf80d0)[eax_48 * 5] = 6
        sub_4623b0(0, edx_8, &(&data_bf80d0)[eax_48 * 5])
        int32_t eax_51 = data_27c05dc
        return sub_464290(&data_bf80d0, &(&data_bf80d0)[eax_51 * 5], eax_51 * 0x14 s/ 0x14, sub_462390)
    
    sub_4c5870("numObjs <= maxObjs", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66de, "AddDrawObj")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

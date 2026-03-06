// 函数名称: sub_418a60
// 虚拟地址: 0x418a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_418a60()
{
    // 第一条实际指令: void var_7c
    void var_7c
    int32_t eax_1 = __security_cookie ^ &var_7c
    void* eax_3
    int32_t edx
    eax_3, edx = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* esi_1 = eax_3
    void* var_74 = esi_1
    void var_6c
    int32_t edx_1
    
    if (*(esi_1 + 0xaa2) == 0)
        if (*(esi_1 + 0xaa1) != 0)
            int32_t eax_6 = *(esi_1 + 0x24)
            *(esi_1 + 0xaa1) = 0
            sub_46b410(sub_418870(eax_6))
            edx_1 = sub_4245c0()
            *(esi_1 + 0x1c) = 0xa
            goto label_418ae6
        
        if (*(esi_1 + 0xaa0) == 0)
            if (*(esi_1 + 0x1c) == 0xd)
                void* ecx_7 = data_27e7a40
                *(esi_1 + 0x550) = 0
                *(esi_1 + 0xa94) = 0
                void* eax_13 = *(ecx_7 + 0x548)
                *(eax_13 + 0x210) = 2
                *(eax_13 + 0x2c078) = 1
                *(eax_13 + 0x214) = 0
                sub_5a6aba(eax_1 ^ &var_7c)
                return 
            
            void* eax_14 = *(data_27e7a40 + 0x548)
            *(eax_14 + 0x210) = 0
            *(eax_14 + 0x2c078) = 1
            *(eax_14 + 0x214) = 0
        else
            int32_t eax_10 = *(esi_1 + 0x1a04)
            *(esi_1 + 0x1a08) = eax_10
            *(esi_1 + 0xaa0) = 0
            *(esi_1 + 0x1c) = 0xf
            sub_46aca0(esi_1 + 0xaa4, edx, esi_1 + 0xfc4, eax_10)
            
            if (*(esi_1 + 0x1f38) == 0)
                void* edi_3 = *(data_27e7a40 + 0x548)
                
                if (*(edi_3 + 0x2c078) == 1 && *(edi_3 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    sub_4d66f0(&var_6c)
                
                *(edi_3 + 0x210) = 6
                *(edi_3 + 0x2c078) = 0
                *(edi_3 + 0x214) = 0
            else
                void* edi_2 = *(data_27e7a40 + 0x548)
                
                if (*(edi_2 + 0x2c078) == 1 && *(edi_2 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    sub_4d66f0(&var_6c)
                
                *(edi_2 + 0x210) = 2
                *(edi_2 + 0x2c078) = 0
                *(edi_2 + 0x214) = 0
    else
        int32_t eax_4 = *(esi_1 + 0x24)
        *(esi_1 + 0xaa2) = 0
        sub_46b410(sub_418870(eax_4))
        edx_1 = sub_4245c0()
        *(esi_1 + 0x1c) = 6
    label_418ae6:
        int32_t eax_8 = *(esi_1 + 0x1a04)
        *(esi_1 + 0x1a08) = eax_8
        *(esi_1 + 0x24) = 0xffffffff
        sub_46aca0(esi_1 + 0xaa4, edx_1, esi_1 + 0xfc4, eax_8)
        void* ecx_2 = data_27e7a40
        *(esi_1 + 0x1f30) = 0
        *(esi_1 + 0xa94) = 0
        void* edi_1 = *(ecx_2 + 0x548)
        
        if (*(edi_1 + 0x2c078) == 1 && *(edi_1 + 0x210) == 0)
            sub_4d6480(data_307bef0)
            sub_4d66f0(&var_6c)
        
        *(edi_1 + 0x210) = 2
        *(edi_1 + 0x2c078) = 0
        *(edi_1 + 0x214) = 0
    
    if (*(esi_1 + 0x1c) == 5 && *(esi_1 + 0x56c) == 0)
        *(*(data_27e7a40 + 0x548) + 0x4389c) = fconvert.s(fconvert.t(-1f))
    
    int32_t i_2 = 0
    void* var_78
    
    if (*(esi_1 + 0x550) s> 0)
        void* esi_2 = esi_1 + 0x30
        var_78 = esi_2
        int32_t i
        
        do
            int32_t* eax_16 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *esi_2)
            int32_t edx_5 = eax_16[0x1a]
            eax_16[0x1e] = fconvert.s(float.t(0))
            __builtin_memcpy(&eax_16[0xb], &eax_16[3], 0x20)
            eax_16[0x16] = eax_16[0x19]
            int32_t ecx_14 = eax_16[0x1b]
            eax_16[0x17] = edx_5
            eax_16[0x18] = ecx_14
            eax_16[0x14] = 0xffffffff
            eax_16[0x26].w = 0
            eax_16[0x27].b = 0
            
            if (eax_16[0x17] == 1)
                eax_16[0x1c].b = 1
            
            if (*eax_16 != 1)
                sub_4245c0()
            else if (eax_16[0x1d] != 2)
                eax_16[0x1d] = 0
            else
                data_c020d4 -= 1
                eax_16[0x1d] = 7
            
            i = i_2 + 1
            esi_2 = var_78 + 4
            i_2 = i
            var_78 = esi_2
        while (i s< *(var_74 + 0x550))
        esi_1 = var_74
    
    bool cond:2 = *(esi_1 + 0x1c) != 0x1b
    *(esi_1 + 0x550) = 0
    
    if (not(cond:2))
        var_78 = nullptr
        
        if (*(esi_1 + 0x1f30) s> 0)
            void* ebx_4 = esi_1 + 0x1a10
            
            while (true)
                int32_t edx_7 = *ebx_4
                void* ecx_15 = *(data_27e7a40 + 0x548)
                
                if (edx_7 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct RFTGGfx>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_20 = zx.d(edx_7.w)
                
                if (eax_20 u< *(ecx_15 + 0x43964))
                    int32_t esi_6 = *(ecx_15 + 0x43960)
                    
                    if (*(eax_20 * 0xb0 + esi_6 + 0xac) == edx_7)
                        void* eax_21 = eax_20 * 0xb0
                        *(eax_21 + esi_6 + 0x78) = fconvert.s(float.t(0))
                        int32_t edx_8 = *(eax_21 + esi_6 + 0x68)
                        void* eax_22 = eax_21 + esi_6
                        __builtin_memcpy(eax_22 + 0x2c, eax_22 + 0xc, 0x20)
                        *(eax_22 + 0x58) = *(eax_22 + 0x64)
                        int32_t ecx_19 = *(eax_22 + 0x6c)
                        *(eax_22 + 0x5c) = edx_8
                        *(eax_22 + 0x60) = ecx_19
                        bool cond:4_1 = *(eax_22 + 0x5c) != 1
                        *(eax_22 + 0x50) = 0xffffffff
                        *(eax_22 + 0x98) = 0
                        *(eax_22 + 0x9c) = 0
                        
                        if (not(cond:4_1))
                            *(eax_22 + 0x70) = 1
                        
                        void* eax_24 = var_78 + 1
                        ebx_4 += 4
                        var_78 = eax_24
                        
                        if (eax_24 s< *(var_74 + 0x1f30))
                            continue
                        
                        esi_1 = var_74
                        break
                
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct RFTGGfx>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        *(esi_1 + 0xa94) = 0
        sub_46bf90()
        void* edi_6 = *(data_27e7a40 + 0x548)
        
        if (*(edi_6 + 0x2c078) == 1 && *(edi_6 + 0x210) == 0)
            sub_4d6480(data_307bef0)
            void var_3c
            sub_4d66f0(&var_3c)
        
        *(edi_6 + 0x210) = 2
        *(edi_6 + 0x2c078) = 0
        *(edi_6 + 0x214) = 0
    
    if (*(esi_1 + 0x1c) == 2)
        var_78 = nullptr
        
        if (*(esi_1 + 0x1f30) s> 0)
            void* ebx_5 = esi_1 + 0x1a10
            
            while (true)
                int32_t edx_10 = *ebx_5
                void* ecx_21 = *(data_27e7a40 + 0x548)
                
                if (edx_10 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct RFTGGfx>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_28 = zx.d(edx_10.w)
                
                if (eax_28 u< *(ecx_21 + 0x43964))
                    int32_t esi_8 = *(ecx_21 + 0x43960)
                    
                    if (*(eax_28 * 0xb0 + esi_8 + 0xac) == edx_10)
                        void* eax_30 = eax_28 * 0xb0 + esi_8
                        
                        if (*(eax_30 + 0x5c) == 0x11)
                            if (*(eax_30 + 0x74) != 2)
                                *(eax_30 + 0x74) = 0
                            else
                                data_c020d4 -= 1
                                *(eax_30 + 0x74) = 7
                        
                        int32_t edx_11 = *(eax_30 + 0x68)
                        *(eax_30 + 0x78) = fconvert.s(float.t(0))
                        __builtin_memcpy(eax_30 + 0x2c, eax_30 + 0xc, 0x20)
                        *(eax_30 + 0x58) = *(eax_30 + 0x64)
                        int32_t ecx_25 = *(eax_30 + 0x6c)
                        *(eax_30 + 0x5c) = edx_11
                        *(eax_30 + 0x60) = ecx_25
                        bool cond:5_1 = *(eax_30 + 0x5c) != 1
                        *(eax_30 + 0x50) = 0xffffffff
                        *(eax_30 + 0x98) = 0
                        *(eax_30 + 0x9c) = 0
                        
                        if (not(cond:5_1))
                            *(eax_30 + 0x70) = 1
                        
                        void* eax_34 = var_78 + 1
                        ebx_5 += 4
                        var_78 = eax_34
                        
                        if (eax_34 s< *(var_74 + 0x1f30))
                            continue
                        
                        esi_1 = var_74
                        break
                
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct RFTGGfx>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        *(esi_1 + 0xa94) = 0
        *(esi_1 + 0x1c) = 1
    
    if (*(esi_1 + 0x1c) == 0x1c)
        void* eax_35 = data_27e7a40
        int32_t i_1 = *(eax_35 + 0x74)
        void* eax_36 = *(eax_35 + 0x548)
        
        if (eax_36 == 0)
            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                "GetGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* edi_8 = *(eax_36 + 0x45844)
        int32_t eax_40 = sx.d(*(edi_8 + 0x1e6a))
        int32_t eax_41 = eax_40 - 1
        void* ebx_6
        
        if (eax_40 - 1 s< 0)
        label_419132:
            ebx_6 = var_78
        else
            while (sx.d(*(edi_8 + eax_41 + 0x1e84)) != i_1)
                int32_t temp1_1 = eax_41
                eax_41 -= 1
                
                if (temp1_1 - 1 s< 0)
                    goto label_419132
            
            ebx_6 = sx.d(*(edi_8 + (eax_41 << 1) + 0x1e6c))
            eax_41 = sx.d(*(edi_8 + (eax_41 << 1) + 0x1e90))
            var_78 = eax_41
        
        int32_t eax_42 =
            sub_4a0d70(eax_41, sx.d(*(edi_8 + ebx_6 * 0x14 + 0x464)), edi_8, ebx_6, 0xffffffff, 1)
        *(esi_1 + 0x1f78) = sub_4a0d70(eax_42, i_1, edi_8, ebx_6, var_78, 0) - eax_42
    
    sub_5a6aba(eax_1 ^ &var_7c)
}

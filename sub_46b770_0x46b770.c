// 函数名称: sub_46b770
// 虚拟地址: 0x46b770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46b770(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t i_4
    int32_t i_4
    int32_t eax_1 = __security_cookie ^ &i_4
    void* ebx = arg2
    void* var_578 = ebx
    void* i_19 = sub_46b2b0(ebx)
    i_4 = i_19
    void* eax_4 = sub_46b2b0(ebx)
    int32_t ecx = *(eax_4 + 0x1f34)
    int32_t edx = *(eax_4 + 0x1f30)
    
    if (ecx s<= edx)
        ecx = edx
    
    int32_t esi_1 = 0
    int32_t esi_2
    
    if (ecx s<= 0)
    label_46b7e7:
        esi_2 = arg4
        sub_46a670(eax_4, arg3, ebx, esi_2)
    else
        eax_4 += 0x1a10
        
        while (*eax_4 != *(arg3 + 0xac))
            esi_1 += 1
            eax_4 += 4
            
            if (esi_1 s>= ecx)
                goto label_46b7e7
        
        sub_46b4f0(var_578)
        ebx = var_578
        esi_2 = arg4
    
    int32_t i_7 = *(i_19 + 0x554)
    int32_t eax_6 = *(i_19 + 0x1c)
    void* var_574_1
    void var_530
    
    if (eax_6 == 7)
        var_574_1 = i_19 + 0x574
        sub_469fa0(*(i_19 + 0xa94), i_19 + 0x574, &var_530)
        int32_t eax_8 = *(i_19 + 0x24)
        int32_t i_8 = sub_49f150(eax_8, &var_530, ebx, eax_8, &var_530, *(i_19 + 0xa94))
        i_7 = i_8
        
        if (i_8 == 0xffffffff)
            sub_4c5870("numNeededDiscards != -1", &data_83f3d3, "..\code\RFTGShared.cpp", 0x3b1, 
                "RFTGHandlePaymentSelection")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(i_19 + 0x554) = i_8
        *(i_19 + 0x558) = i_8
    else if (eax_6 == 0xb)
        var_574_1 = i_19 + 0x574
        sub_469fa0(*(i_19 + 0xa94), i_19 + 0x574, &var_530)
        int32_t eax_12 = *(i_19 + 0xa94)
        int32_t i_9 = sub_4a1730(eax_12, ebx, esi_2, *(i_19 + 0x24), &var_530, eax_12, *(i_19 + 0x28), 
            *(i_19 + 0x2c))
        i_7 = i_9
        int32_t i_13 = i_7
        
        if (i_13 s> sub_49c8f0(i_9, esi_2, ebx, 2))
            i_7 = 0xffffffff
            i_13 = 0xffffffff
        
        int32_t i_10 = *(i_19 + 0x550)
        *(i_19 + 0x554) = i_13
        *(i_19 + 0x558) = i_13
        
        if (i_10 s> i_13)
            if (i_13 != 0xffffffff)
                i_10 -= i_13
            
            int32_t i_6 = i_10
            
            if (i_10 s> 0)
                int32_t i
                
                do
                    int32_t eax_14 = *(i_19 + 0x550)
                    
                    if (eax_14 - 1 s< 0)
                        sub_4c5870("slot >= 0", &data_83f3d3, "..\code\RFTGShared.cpp", 0x3d5, 
                            "RFTGHandlePaymentSelection")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_17 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, 
                        *(i_19 + ((eax_14 - 1) << 2) + 0x30))
                    sub_46a670(eax_17, eax_17, ebx, arg4)
                    i = i_6 - 1
                    i_6 = i
                while (i s> 0)
    else
        int32_t i_5
        int32_t var_568
        int32_t var_564
        
        if (eax_6 != 0x1e)
            if (eax_6 != 0x1c)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x447, 
                    "RFTGHandlePaymentSelection")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_574_1 = i_19 + 0x574
            sub_469fa0(*(i_19 + 0xa94), i_19 + 0x574, &var_530)
            sub_46f8c0(&var_568, ebx, esi_2, &i_4, &var_568)
            int32_t i_11 = i_4
            int32_t eax_35 =
                sub_4a0d70(i_11, sx.d(*(esi_2 + i_11 * 0x14 + 0x464)), esi_2, i_11, 0xffffffff, 1)
            int32_t i_15 = i_4
            var_564 = eax_35
            int32_t eax_36 = var_568
            int32_t i_12 = sub_4a0d70(eax_36, ebx, esi_2, i_15, eax_36, 0) - var_564
            int32_t edx_22 = *(i_19 + 0xa94)
            i_4 = i_12
            int32_t eax_38 = sub_46b5e0(esi_2, &var_530, edx_22)
            int32_t i_18 = i_4
            *(i_19 + 0x558) = eax_38
            
            if (i_18 s< 0)
                int32_t ecx_25 = neg.d(i_18)
                
                if (ecx_25 s>= eax_38)
                    ecx_25 = eax_38
                
                *(i_19 + 0x554) = ecx_25
            else
                *(i_19 + 0x554) = 0
            
            int32_t i_16 = *(i_19 + 0x550)
            
            if (i_16 s> eax_38)
                if (eax_38 != 0xffffffff)
                    i_16 -= eax_38
                
                i_5 = i_16
                
                if (i_16 s> 0)
                    int32_t i_1
                    
                    do
                        int32_t eax_39 = *(i_19 + 0x550)
                        
                        if (eax_39 - 1 s< 0)
                            sub_4c5870("slot >= 0", &data_83f3d3, "..\code\RFTGShared.cpp", 0x439, 
                                "RFTGHandlePaymentSelection")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* eax_41 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, 
                            *(i_19 + ((eax_39 - 1) << 2) + 0x30))
                        sub_46a670(eax_41, eax_41, ebx, arg4)
                        i_1 = i_5 - 1
                        i_5 = i_1
                    while (i_1 s> 0)
                    i_18 = i_4
            
            *(i_19 + 0x1f78) = sub_46b660(ebx) + i_18
        else
            var_574_1 = i_19 + 0x574
            sub_469fa0(*(i_19 + 0xa94), i_19 + 0x574, &var_530)
            int32_t eax_21 = sub_46b580(arg4, &var_564, ebx, &var_568, &i_5)
            int32_t i_17 = i_5
            int32_t eax_22 = sub_4a0d70(eax_21, var_578, arg4, i_17, 0xffffffff, 1)
            int32_t eax_23 = sub_4a0d70(eax_22, var_568, arg4, i_17, var_564, 0)
            i_19 = i_4
            int32_t esi_6 = 1 - eax_22 + eax_23
            int32_t eax_24 = *(i_19 + 0xa94)
            var_568 = esi_6
            int32_t eax_25 = sub_46b5e0(arg4, &var_530, eax_24)
            int32_t i_14 = *(i_19 + 0x550)
            *(i_19 + 0x558) = eax_25
            
            if (i_14 s> eax_25)
                if (eax_25 != 0xffffffff)
                    i_14 -= eax_25
                
                i_5 = i_14
                
                if (i_14 s> 0)
                    int32_t i_2
                    
                    do
                        int32_t eax_26 = *(i_19 + 0x550)
                        
                        if (eax_26 - 1 s< 0)
                            sub_4c5870("slot >= 0", &data_83f3d3, "..\code\RFTGShared.cpp", 0x402, 
                                "RFTGHandlePaymentSelection")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* eax_28 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, 
                            *(i_19 + ((eax_26 - 1) << 2) + 0x30))
                        sub_46a670(eax_28, eax_28, var_578, arg4)
                        i_2 = i_5 - 1
                        i_5 = i_2
                    while (i_2 s> 0)
                    esi_6 = var_568
            
            *(i_19 + 0x1f7c) = esi_6 - sub_46b660(var_578)
    int32_t i_3 = *(i_19 + 0x1c)
    
    if (i_3 == 0x1c || i_3 == 0x1e)
        bool cond:0_1 = *(i_19 + 0xa94) s<= 0
        char var_57d_1 = 0
        i_4 = 0
        
        if (not(cond:0_1))
            void* ebx_4 = var_574_1
            
            do
                i_3 = arg4
                
                if (*(*(i_3 + *(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *ebx_4) + 0x7c) * 0x14
                        + 0x46c) + 4) == 0xa7)
                    var_57d_1 = 1
                    break
                
                i_3 = i_4 + 1
                ebx_4 += 4
                i_4 = i_3
            while (i_3 s< *(i_19 + 0xa94))
        
        if (*(i_19 + 0x570) != 0 && var_57d_1 == 0)
            goto label_46bd6d
    else
        i_3 = i_7
        
        if (*(i_19 + 0x550) != i_3)
        label_46bd6d:
            void* eax_51 = *(data_27e7a40 + 0x548)
            *(eax_51 + 0x210) = 0
            *(eax_51 + 0x2c078) = 1
            *(eax_51 + 0x214) = 0
            sub_5a6aba(eax_1 ^ &i_4)
            return eax_51
    
    void* esi_10 = *(data_27e7a40 + 0x548)
    
    if (*(esi_10 + 0x2c078) == 1 && *(esi_10 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_560
        i_3 = sub_4d66f0(&var_560)
    
    *(esi_10 + 0x210) = 0
    *(esi_10 + 0x2c078) = 0
    *(esi_10 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &i_4)
    return i_3
}

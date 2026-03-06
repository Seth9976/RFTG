// 函数名称: sub_66ad90
// 虚拟地址: 0x66ad90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint8_t*sub_66ad90(uint32_t arg1)
{
    // 第一条实际指令: uint32_t esi = arg1
    uint32_t esi = arg1
    int32_t eax = *(esi + 0x178)
    long double st0
    
    if (eax == 0)
        int32_t eax_9 = *(esi + 0x17c)
        
        if (eax_9 == 0)
            *(esi + 0x178) = 0x186a0
            *(esi + 0x17c) = 0x186a0
            *(esi + 0x74) &= 0xffffdfff
        else
            *(esi + 0x178) = sub_662d00(eax_9)
            *(esi + 0x74) &= 0xffffdfff
    else
        int32_t ecx_1 = *(esi + 0x17c)
        
        if (ecx_1 == 0)
            *(esi + 0x17c) = sub_662d00(eax)
            *(esi + 0x74) &= 0xffffdfff
        else
            int32_t eax_1
            st0, eax_1 = sub_662c80(&arg1, eax, ecx_1, 0x186a0)
            int32_t eax_2
            
            if (eax_1 != 0)
                eax_2 = sub_662f10(arg1)
            
            if (eax_1 != 0 && eax_2 == 0)
                *(esi + 0x74) &= 0xffffdfff
            else
                *(esi + 0x74) |= 0x2000
    
    int32_t eax_4 = *(esi + 0x74)
    
    if ((eax_4 & 0x40000) != 0 && (0x80 & eax_4.b) == 0)
        *(esi + 0x70) &= 0xffffdfff
        *(esi + 0x74) = eax_4 & 0xfd7ffeff
        *(esi + 0x134) = 0
    
    if (sub_662f10(*(esi + 0x17c)) == 0)
        *(esi + 0x74) &= 0xff7fffff
        *(esi + 0x70) &= 0xffffdfff
    
    int32_t eax_8 = *(esi + 0x74)
    
    if ((eax_8 & 0x100) == 0)
        if ((0x80 & eax_8.b) != 0 && (eax_8 & 0x4000) != 0)
            int16_t eax_11 = *(esi + 0x156)
            
            if (eax_11 == *(esi + 0x158) && eax_11 == *(esi + 0x15a))
                *(esi + 0x15c) = eax_11
                *(esi + 0x6c) |= 0x800
    else if ((*(esi + 0x13b) & 2) == 0)
        *(esi + 0x6c) |= 0x800
    
    if (*(esi + 0x13b) != 3)
        sub_66acc0(esi)
    else
        sub_66abd0(esi)
    
    int32_t eax_13 = *(esi + 0x74)
    
    if ((eax_13 & 0x200) != 0 && (0x80 & eax_13.b) != 0 && (eax_13 & 0x100) == 0
            && *(esi + 0x13c) != 0x10)
        *(esi + 0x156) = (((zx.d(*(esi + 0x156)) + 0x81) * 0xff) u>> 0x10).w
        *(esi + 0x158) = (((zx.d(*(esi + 0x158)) + 0x81) * 0xff) u>> 0x10).w
        *(esi + 0x15a) = (((zx.d(*(esi + 0x15a)) + 0x81) * 0xff) u>> 0x10).w
        *(esi + 0x15c) = (((zx.d(*(esi + 0x15c)) + 0x81) * 0xff) u>> 0x10).w
    
    if ((eax_13 & 0x4000400) != 0 && (0x80 & eax_13.b) != 0 && (eax_13 & 0x100) == 0
            && *(esi + 0x13c) == 0x10)
        int16_t edx_17 = 0x101 * *(esi + 0x158)
        *(esi + 0x156) *= 0x101
        *(esi + 0x158) = edx_17
        int16_t edx_18 = 0x101 * *(esi + 0x15c)
        *(esi + 0x15a) *= 0x101
        *(esi + 0x15c) = edx_18
    
    int32_t edx_19 = *(esi + 0x158)
    *(esi + 0x15e) = *(esi + 0x154)
    int32_t ecx_5
    ecx_5.w = *(esi + 0x15c)
    *(esi + 0x162) = edx_19
    *(esi + 0x166) = ecx_5.w
    
    if ((eax_13 & 0x2000) != 0)
    label_66b1eb:
        sub_663460(esi, zx.d(*(esi + 0x13c)))
        uint32_t eax_25 = *(esi + 0x74)
        
        if ((0x80 & eax_25.b) != 0)
            if ((eax_25 & 0x600000) != 0)
                sub_664100(esi, "libpng does not support gamma+background+rgb_to_gray")
            
            if (*(esi + 0x13b) != 3)
                uint32_t eax_78 = zx.d(*(esi + 0x14c))
                int32_t ebx_15 = 0x186a0
                int32_t edi_5
                
                if (eax_78 == 1)
                    edi_5 = *(esi + 0x17c)
                else if (eax_78 == 2)
                    edi_5 = sub_662d00(*(esi + 0x178))
                    ebx_15 = sub_662da0(*(esi + 0x178), *(esi + 0x17c))
                else
                    if (eax_78 != 3)
                        sub_664320(esi, "invalid background gamma type")
                        noreturn
                    
                    edi_5 = sub_662d00(*(esi + 0x150))
                    ebx_15 = sub_662da0(*(esi + 0x150), *(esi + 0x17c))
                
                arg1 = sub_662f10(edi_5)
                int32_t eax_89 = sub_662f10(ebx_15)
                
                if (arg1 != 0)
                    *(esi + 0x166) = sub_662ed0(esi, zx.d(*(esi + 0x15c)), edi_5)
                
                if (eax_89 != 0)
                    *(esi + 0x15c) = sub_662ed0(esi, zx.d(*(esi + 0x15c)), ebx_15)
                
                uint32_t ecx_31 = zx.d(*(esi + 0x156))
                int16_t eax_92
                
                if (ecx_31.w == *(esi + 0x158) && ecx_31.w == *(esi + 0x15a))
                    eax_92 = *(esi + 0x15c)
                
                if (ecx_31.w != *(esi + 0x158) || ecx_31.w != *(esi + 0x15a) || ecx_31.w != eax_92)
                    if (arg1 != 0)
                        int16_t eax_93 = sub_662ed0(esi, ecx_31, edi_5)
                        int32_t ecx_33 = zx.d(*(esi + 0x158))
                        *(esi + 0x160) = eax_93
                        int16_t eax_94 = sub_662ed0(esi, ecx_33, edi_5)
                        int32_t edx_68 = zx.d(*(esi + 0x15a))
                        *(esi + 0x162) = eax_94
                        *(esi + 0x164) = sub_662ed0(esi, edx_68, edi_5)
                    
                    if (eax_89 != 0)
                        int16_t eax_97 = sub_662ed0(esi, zx.d(*(esi + 0x156)), ebx_15)
                        int32_t ecx_34 = zx.d(*(esi + 0x158))
                        *(esi + 0x156) = eax_97
                        int16_t eax_98 = sub_662ed0(esi, ecx_34, ebx_15)
                        uint32_t edx_69 = zx.d(*(esi + 0x15a))
                        *(esi + 0x158) = eax_98
                        *(esi + 0x15a) = sub_662ed0(esi, edx_69, ebx_15)
                    
                    *(esi + 0x14c) = 1
                else
                    int16_t ecx_32 = *(esi + 0x166)
                    *(esi + 0x164) = ecx_32
                    *(esi + 0x162) = ecx_32
                    *(esi + 0x160) = ecx_32
                    *(esi + 0x158) = eax_92
                    *(esi + 0x156) = eax_92
                    *(esi + 0x15a) = eax_92
                    *(esi + 0x14c) = 1
            else
                eax_25.b = *(esi + 0x14c)
                void* ecx_17 = *(esi + 0x128)
                uint32_t var_c_2 = zx.d(*(esi + 0x12c))
                char var_8_1
                char var_6_1
                
                if (eax_25.b != 2)
                    uint32_t eax_28 = zx.d(eax_25.b)
                    uint32_t edx_38
                    int32_t ebx_8
                    int32_t edi_3
                    
                    if (eax_28 == 1)
                        edi_3 = *(esi + 0x17c)
                        ebx_8 = 0x186a0
                    else if (eax_28 == 2)
                        edi_3 = sub_662d00(*(esi + 0x178))
                        int32_t eax_37
                        eax_37, edx_38 = sub_662da0(*(esi + 0x178), *(esi + 0x17c))
                        ebx_8 = eax_37
                    else if (eax_28 == 3)
                        edi_3 = sub_662d00(*(esi + 0x150))
                        int32_t eax_34
                        eax_34, edx_38 = sub_662da0(*(esi + 0x150), *(esi + 0x17c))
                        ebx_8 = eax_34
                    else
                        edi_3 = 0x186a0
                        ebx_8 = 0x186a0
                    
                    if (sub_662f10(ebx_8) == 0)
                        int32_t eax_38
                        eax_38.b = *(esi + 0x156)
                        edx_38.b = *(esi + 0x15a)
                        var_8_1 = eax_38.b
                        char var_7_3 = *(esi + 0x158)
                        var_6_1 = edx_38.b
                    else
                        var_8_1 = sub_662df0(st0, zx.d(*(esi + 0x156)), ebx_8)
                        char var_7_2 = sub_662df0(st0, zx.d(*(esi + 0x158)), ebx_8)
                        char eax_42
                        eax_42, edx_38 = sub_662df0(st0, zx.d(*(esi + 0x15a)), ebx_8)
                        var_6_1 = eax_42
                    
                    if (sub_662f10(edi_3) == 0)
                        int32_t eax_43
                        eax_43.b = *(esi + 0x156)
                        edx_38.b = *(esi + 0x15a)
                        arg1.b = eax_43.b
                        arg1:2.b = edx_38.b
                        arg1:1.b = *(esi + 0x158)
                    else
                        arg1.b = sub_662df0(st0, zx.d(*(esi + 0x156)), edi_3)
                        arg1:1.b = sub_662df0(st0, zx.d(*(esi + 0x158)), edi_3)
                        arg1:2.b = sub_662df0(st0, zx.d(*(esi + 0x15a)), edi_3)
                else
                    uint32_t ecx_18 = zx.d(*(esi + 0x156))
                    int32_t eax_26 = *(esi + 0x180)
                    uint32_t edi_2 = zx.d(*(esi + 0x158))
                    var_8_1 = *(eax_26 + ecx_18)
                    char var_7_1 = *(eax_26 + edi_2)
                    uint32_t edx_41 = zx.d(*(esi + 0x15a))
                    eax_26.b = *(eax_26 + edx_41)
                    var_6_1 = eax_26.b
                    int32_t eax_27 = *(esi + 0x18c)
                    arg1.b = *(eax_27 + ecx_18)
                    arg1:2.b = *(eax_27 + edx_41)
                    arg1:1.b = *(eax_27 + edi_2)
                
                int32_t edi_4 = 0
                
                if (var_c_2 s> 0)
                    char* ecx_27 = ecx_17 + 2
                    
                    do
                        char* eax_49
                        void* edx_46
                        
                        if (edi_4 s< zx.d(*(esi + 0x134)))
                            eax_49 = *(esi + 0x1a4) + edi_4
                            edx_46.b = *eax_49
                        
                        if (edi_4 s>= zx.d(*(esi + 0x134)) || edx_46.b == 0xff)
                            uint32_t edx_63 = zx.d(ecx_27[0xffffffff])
                            ecx_27[0xfffffffe] = *(zx.d(ecx_27[0xfffffffe]) + *(esi + 0x180))
                            edx_63.b = *(edx_63 + *(esi + 0x180))
                            uint32_t eax_76 = zx.d(*ecx_27)
                            ecx_27[0xffffffff] = edx_63.b
                            *ecx_27 = *(eax_76 + *(esi + 0x180))
                        else if (edx_46.b != 0)
                            uint16_t edx_47 = zx.w(*eax_49)
                            uint32_t edx_49 = zx.d(
                                zx.w(*(zx.d(ecx_27[0xfffffffe]) + *(esi + 0x18c))) * edx_47
                                + (0xff - edx_47) * zx.w(arg1.b) + 0x80)
                            ecx_27[0xfffffffe] =
                                *(zx.d((((edx_49 u>> 8) + edx_49) s>> 8).b) + *(esi + 0x188))
                            uint16_t edx_52 = zx.w(*(*(esi + 0x1a4) + edi_4))
                            uint32_t edx_54 = zx.d(
                                zx.w(*(zx.d(ecx_27[0xffffffff]) + *(esi + 0x18c))) * edx_52
                                + (0xff - edx_52) * zx.w(arg1:1.b) + 0x80)
                            ecx_27[0xffffffff] =
                                *(zx.d((((edx_54 u>> 8) + edx_54) s>> 8).b) + *(esi + 0x188))
                            uint16_t edx_57 = zx.w(*(*(esi + 0x1a4) + edi_4))
                            uint32_t edx_59 = zx.d(zx.w(*(zx.d(*ecx_27) + *(esi + 0x18c))) * edx_57
                                + (0xff - edx_57) * zx.w(arg1:2.b) + 0x80)
                            *ecx_27 = zx.d((((edx_59 u>> 8) + edx_59) s>> 8).b)[*(esi + 0x188)]
                        else
                            eax_49.w = var_8_1.w
                            edx_46.b = var_6_1
                            *(ecx_27 - 2) = eax_49.w
                            *ecx_27 = edx_46.b
                        
                        edi_4 += 1
                        ecx_27 = &ecx_27[3]
                    while (edi_4 s< var_c_2)
                
                *(esi + 0x74) &= 0xffffdf7f
        else if (*(esi + 0x13b) == 3 && ((eax_25 & 0x1000) == 0 || (eax_25 & 0x600000) == 0))
            uint32_t i_4 = zx.d(*(esi + 0x12c))
            
            if (i_4 s> 0)
                void* eax_101 = *(esi + 0x128) + 2
                uint32_t i
                
                do
                    *(eax_101 - 2) = *(zx.d(*(eax_101 - 2)) + *(esi + 0x180))
                    *(eax_101 - 1) = *(zx.d(*(eax_101 - 1)) + *(esi + 0x180))
                    *eax_101 = *(zx.d(*eax_101) + *(esi + 0x180))
                    eax_101 += 3
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            *(esi + 0x74) &= 0xffffdfff
    else
        if ((eax_13 & 0x600000) != 0)
            if (sub_662f10(*(esi + 0x178)) != 0)
                goto label_66b1eb
            
            int32_t eax_16
            eax_16, ecx_5 = sub_662f10(*(esi + 0x17c))
            
            if (eax_16 != 0)
                goto label_66b1eb
            
            goto label_66b030
        
    label_66b030:
        
        if ((*(esi + 0x74) & 0x80) != 0)
            if (sub_662f10(*(esi + 0x178)) != 0)
                goto label_66b1eb
            
            int32_t eax_18
            eax_18, ecx_5 = sub_662f10(*(esi + 0x17c))
            
            if (eax_18 != 0)
                goto label_66b1eb
            
            if (*(esi + 0x14c) != 3)
                goto label_66b08a
            
            int32_t eax_20
            eax_20, ecx_5 = sub_662f10(*(esi + 0x150))
            
            if (eax_20 != 0)
                goto label_66b1eb
            
            goto label_66b08a
        
    label_66b08a:
        int32_t eax_21
        
        if ((*(esi + 0x74) & &data_800000) != 0)
            eax_21, ecx_5 = sub_662f10(*(esi + 0x17c))
        
        if ((*(esi + 0x74) & &data_800000) != 0 && eax_21 != 0)
            goto label_66b1eb
        
        if ((*(esi + 0x74) & 0x80) != 0 && *(esi + 0x13b) == 3)
            uint32_t ebx_1 = zx.d(*(esi + 0x134))
            ecx_5.b = *(esi + 0x158)
            arg1.b = *(esi + 0x156)
            int32_t edi_1 = 0
            uint32_t var_c_1 = ebx_1
            arg1:1.b = ecx_5.b
            arg1:2.b = *(esi + 0x15a)
            
            if (ebx_1 s> 0)
                char* eax_23 = *(esi + 0x128) + 2
                
                do
                    char* ecx_8 = *(esi + 0x1a4)
                    uint16_t edx_23
                    edx_23.b = ecx_8[edi_1]
                    
                    if (edx_23.b == 0)
                        ecx_8.b = arg1:2.b
                        *(eax_23 - 2) = arg1.w
                        *eax_23 = ecx_8.b
                    else if (edx_23.b != 0xff)
                        uint16_t ecx_9 = zx.w(ecx_8[edi_1])
                        uint16_t ebx_4 = zx.w(arg1:1.b)
                        uint32_t ecx_10 = zx.d((0xff - ecx_9) * zx.w(arg1.b)
                            + zx.w(eax_23[0xfffffffe]) * ecx_9 + 0x80)
                        eax_23[0xfffffffe] = (((ecx_10 u>> 8) + ecx_10) s>> 8).b
                        uint16_t ecx_12 = zx.w(*(*(esi + 0x1a4) + edi_1))
                        uint16_t ebx_6 = zx.w(arg1:2.b)
                        uint32_t ecx_13 =
                            zx.d((0xff - ecx_12) * ebx_4 + zx.w(eax_23[0xffffffff]) * ecx_12 + 0x80)
                        eax_23[0xffffffff] = (((ecx_13 u>> 8) + ecx_13) s>> 8).b
                        uint16_t ecx_15 = zx.w(*(*(esi + 0x1a4) + edi_1))
                        ebx_1 = var_c_1
                        uint32_t ecx_16 = zx.d((0xff - ecx_15) * ebx_6 + zx.w(*eax_23) * ecx_15 + 0x80)
                        *eax_23 = (((ecx_16 u>> 8) + ecx_16) s>> 8).w.b
                    
                    edi_1 += 1
                    eax_23 = &eax_23[3]
                while (edi_1 s< ebx_1)
            
            *(esi + 0x74) &= 0xffffff7f
    
    uint8_t* result = *(esi + 0x74)
    
    if ((result.b & 8) != 0 && (result & 0x1000) == 0 && *(esi + 0x13b) == 3)
        uint32_t i_5 = zx.d(*(esi + 0x12c))
        int32_t edx_76 = 8 - zx.d(*(esi + 0x198))
        *(esi + 0x74) = result & 0xfffffff7
        arg1 = i_5
        
        if (edx_76 - 1 u<= 6 && i_5 s> 0)
            void* edi_6 = nullptr
            uint32_t i_1
            
            do
                uint8_t* eax_104 = edi_6 + *(esi + 0x128)
                int32_t ecx_36
                ecx_36.b = edx_76.b
                *eax_104 u>>= ecx_36.b
                edi_6 += 3
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t ebx_19 = 8 - zx.d(*(esi + 0x199))
        
        if (ebx_19 - 1 u<= 6)
            uint32_t i_6 = arg1
            
            if (i_6 s> 0)
                int32_t edx_78 = 0
                uint32_t i_2
                
                do
                    uint8_t* eax_106 = edx_78 + *(esi + 0x128) + 1
                    int32_t ecx_37
                    ecx_37.b = ebx_19.b
                    *eax_106 u>>= ecx_37.b
                    edx_78 += 3
                    i_2 = i_6
                    i_6 -= 1
                while (i_2 != 1)
        
        void* ebx_20 = 8 - zx.d(*(esi + 0x19a))
        result = ebx_20 - 1
        
        if (result u<= 6)
            uint32_t i_7 = arg1
            
            if (i_7 s> 0)
                int32_t edx_80 = 0
                uint32_t i_3
                
                do
                    result = edx_80 + *(esi + 0x128) + 2
                    int32_t ecx_38
                    ecx_38.b = ebx_20.b
                    *result u>>= ecx_38.b
                    edx_80 += 3
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
    
    return result
}

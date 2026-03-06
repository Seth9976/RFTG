// 函数名称: sub_51e700
// 虚拟地址: 0x51e700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_51e700(int32_t* arg1)
{
    // 第一条实际指令: void* ecx_2 = data_30786fc
    void* ecx_2 = data_30786fc
    int32_t* esi = arg1
    
    if (ecx_2 != 0)
        int32_t edx_1 = *esi
        void* edi_1 = data_27e7fcc
        
        if (edx_1 == 1)
            arg1 = esi[1]
            
            if (arg1 == 0x50 && (esi[2].b & 0xa) != 0 && *(edi_1 + 0x40) != 0)
                void* eax = sub_4c98a0()
                int32_t ecx = *(eax + 0x3c)
                uint8_t edx_3 = (ecx u>> 7).b & 1
                int32_t ecx_1
                
                if (edx_3 != 0)
                    ecx_1 = ecx & 0xffffff7f
                else
                    ecx_1 = ecx | 0x80
                
                *(eax + 0x3c) = ecx_1
                void* eax_1 = data_30786fc
                ecx_1.b = edx_3 == 0
                *(eax_1 + 0x5e20694) = ecx_1.b
                
                if (*(eax_1 + 0x5e2068c) == 0)
                    *(eax_1 + 0x5e2068e) = 1
                
                eax_1.b = 1
                return eax_1
            
            if (*(ecx_2 + 0x5e20694) != 0 && *(edi_1 + 0x40) != 0)
                int32_t eax_6
                
                switch (arg1)
                    case 0x1b
                        *(ecx_2 + 0x5e206b0) = 0
                        *(ecx_2 + 0x5e2069c) = 0
                        *(ecx_2 + 0x5e206a8) = 0
                        arg1.b = 1
                        return arg1
                    case 0x24
                        int32_t eax_11 = *(ecx_2 + 0x5e2069c)
                        
                        if (eax_11 s>= 0)
                            *(ecx_2 + 0x5e206b4) = *(ecx_2 + (eax_11 << 2) + 0x5e1c804)
                            *(ecx_2 + 0x5e206b0) = 2
                            *(ecx_2 + 0x5e2069c) = 0
                            *(ecx_2 + 0x5e206a8) = 0
                        
                        eax_11.b = 1
                        return eax_11
                    case 0x25
                        sub_51e4e0(*(ecx_2 + 0x5e206b4))
                        void* eax_10
                        eax_10.b = 1
                        return eax_10
                    case 0x26
                        eax_6 = *(ecx_2 + 0x5e2069c)
                        
                        if (eax_6 s>= 0)
                            *(ecx_2 + 0x5e2069c) = eax_6 - 1
                            
                            if (eax_6 - 1 s>= 0 && eax_6 - 1 s< *(ecx_2 + 0x5e206a8))
                                *(ecx_2 + 0x5e206a8) = eax_6 - 1
                        
                        eax_6.b = 1
                        return eax_6
                    case 0x27
                        int32_t eax_12 = *(ecx_2 + 0x5e2069c)
                        
                        if (eax_12 s>= 0)
                            *(ecx_2 + 0x5e206b4) = *(ecx_2 + (eax_12 << 2) + 0x5e1c804)
                            *(ecx_2 + 0x5e206b0) = 1
                            *(ecx_2 + 0x5e2069c) = 0
                            *(ecx_2 + 0x5e206a8) = 0
                        
                        eax_12.b = 1
                        return eax_12
                    case 0x28
                        eax_6 = *(ecx_2 + 0x5e2069c)
                        
                        if (eax_6 s< *(ecx_2 + 0x5e206ac) - 1)
                            *(ecx_2 + 0x5e2069c) = eax_6 + 1
                            eax_6 = eax_6 + 1 - *(ecx_2 + 0x5e206a4) + 1
                            
                            if (eax_6 s> *(ecx_2 + 0x5e206a8))
                                *(ecx_2 + 0x5e206a8) = eax_6
                                eax_6.b = 1
                                return eax_6
                        
                        eax_6.b = 1
                        return eax_6
                    case 0x43
                        *(ecx_2 + 0x5e2068e) = 1
                        arg1.b = 1
                        return arg1
                    case 0x48
                        arg1.b = 1
                        edx_1.b = *(ecx_2 + 0x5e2068d) == 0
                        *(ecx_2 + 0x5e2068d) = edx_1.b
                        return arg1
                    case 0x53
                        int32_t eax_5
                        eax_5.b = 1
                        *(ecx_2 + 0x5e20690) = mods.dp.d(sx.q(*(ecx_2 + 0x5e20690) + 1), 5)
                        return eax_5
        
        if (edx_1 == 0 && *(ecx_2 + 0x5e20694) != 0 && *(edi_1 + 0x40) != 0)
            arg1 = esi[1]
            
            if (arg1 == 0x5b)
                int32_t eax_13 = *(ecx_2 + 0x5e20698)
                
                if (eax_13 s> 0)
                    *(ecx_2 + 0x5e20698) = eax_13 - 1
                
                eax_13.b = 1
                return eax_13
            
            if (arg1 == 0x5d)
                int32_t eax_14 = *(ecx_2 + 0x5e20698)
                
                if (eax_14 s< 0x28)
                    *(ecx_2 + 0x5e20698) = eax_14 + 1
                
                eax_14.b = 1
                return eax_14
    
    arg1.b = 0
    return arg1
}

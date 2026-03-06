// 函数名称: sub_402b10
// 虚拟地址: 0x402b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_402b10(uint32_t arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t esi = *edi
    
    if (esi == 0)
        return 
    
    void* ecx_1 = data_27e7bb8
    arg1 = zx.d(esi.w)
    
    if (arg1 u>= *(ecx_1 + 4) || *(arg1 * 0x4c + *ecx_1 + 0x48) != esi)
        return 
    
    int32_t eax_2 = *(sub_4c92a0(esi) + 0x14)
    
    if (eax_2 != 2 && eax_2 != 3)
        int32_t eax_3 = edi[1]
        void* var_c
        void* eax_8
        
        if (eax_3 s< 0x7d0)
            if (sub_402ae0(&var_c, edi) != 0)
                void* esi_2 = var_c
                sub_407510(esi_2)
                int32_t* eax_7 = *(data_27e7a4c + 0x1d0)
                
                if (eax_7 != 0)
                    sub_4d2690(eax_7, edi)
                
                int32_t edi_1 = edi[1]
                
                if (edi_1 == 0x3ec)
                    sub_402970()
                    *(esi_2 + 0x20) = 2
                    sub_407670()
                    return 
                
                if (edi_1 == 0x3ed)
                    *(esi_2 + 0x20) = 0
                    *(esi_2 + 0x24) = 3
                    sub_407670()
                    return 
                
                if (edi_1 == 0x3ee)
                    *(esi_2 + 0x20) = 0
                    
                    if (*(esi_2 + 0x24) == 8)
                        sub_4024a0(1)
                        *(esi_2 + 0x24) = 0
                
                sub_407670()
                return 
            
            sub_407730()
            eax_8 = edi[1]
            
            if (eax_8 == 0x3ea)
            label_402c25:
                sub_402a00(*edi)
                sub_4077f0()
                return 
            
            if (eax_8 == 0x3eb)
                void* eax_10 = sub_402920(edi)
                
                if (eax_10 != 0)
                    sub_4b8dc0(eax_10)
                    sub_4077f0()
                    return 
                
                sub_4c5870("Halt", &data_83f3d3, "..\code\CardNet.cpp", 0x639, "CardNetHandleMessage")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else if (eax_3 s>= 0xbb8)
            bool cond:0_1
            
            if (eax_3 s<= 0xf4244)
                cond:0_1 = eax_3 s<= 0xf4256
            else
                cond:0_1 = eax_3 s<= 0xf4256
                
                if (eax_3 s< 0xf4256)
                    if (sub_402ae0(&var_c, edi) == 0)
                        int32_t var_1c_6 = edi[1]
                        sub_4c57f0("got client message for no client %d")
                        return 
                    
                    sub_407510(var_c)
                    sub_4049e0(edi)
                    sub_407670()
                    return 
            
            if (not(cond:0_1) && eax_3 s< 0xf4272)
                sub_407730()
                void* eax_25
                int32_t* edx_1
                eax_25, edx_1 = sub_402920(edi)
                
                if (eax_25 == 0)
                    sub_4c8da0(*edi)
                    sub_4077f0()
                    return 
                
                int32_t* var_1c_7 = edi
                sub_4b7d00(eax_25, edx_1)
                sub_4077f0()
                return 
            
            if (eax_3 != 0xf4242)
                int32_t var_1c_8 = eax_3
                sub_4c57f0("Invalid message: %d")
                return 
            
            sub_407730()
            int32_t* var_1c_9 = edi
            sub_4027e0()
        else
            if (sub_402ae0(&var_c, edi) != 0)
                sub_407510(var_c)
                sub_4d2690(*(data_27e7a4c + 0x1d0), edi)
                sub_407670()
                return 
            
            sub_407730()
            eax_8 = edi[1]
            
            if (eax_8 == 0x3ea)
                goto label_402c25
            
            if (eax_8 == 0x3eb)
                void* eax_16 = sub_402920(edi)
                
                if (eax_16 != 0)
                    sub_4d2690(*(data_27e7a4c + 0x1d0), edi)
                    sub_4b8dc0(eax_16)
                    sub_4077f0()
                    return 
                
                sub_4c5870("Halt", &data_83f3d3, "..\code\CardNet.cpp", 0x65f, "CardNetHandleMessage")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        sub_4077f0()
        return 
    
    arg1 = edi[1]
    
    if (arg1 == 0x3ec)
        return 
    
    if (arg1 == 0xfa0)
        void* eax_29 = data_8c8710
        
        if (eax_29 != 0)
            int32_t eax_30 = *(eax_29 + 0xc)
            
            if ((eax_30 == 1 && edi[0x3f7] != 0xc8) || eax_30 == 2)
                char* const eax_31 = edi[0x3f8]
                
                if (eax_31 == 0)
                    eax_31 = &data_83f3d3
                
                char* const var_1c_10 = eax_31
                int32_t var_20_1 = edi[0x3f7]
                sub_4c5680("http response code %d, message: %s")
        
        sub_4c8da0(*edi)
        return 
    
    if (arg1 == 0xfa2)
        return 
    
    if (arg1 != 0x3ed && arg1 != 0xfa1)
        uint32_t var_1c_11 = arg1
        sub_4c5680("Analytics unknown message type %d")
        return 
    
    sub_4c5680("analytics connect failed")
}

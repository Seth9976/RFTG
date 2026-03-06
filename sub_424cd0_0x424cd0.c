// 函数名称: sub_424cd0
// 虚拟地址: 0x424cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424cd0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t result = 0
    
    if (arg1 == 2)
        if (arg3 != *(data_27e7a40 + 0x74))
            goto label_424e7a
        
        void* edi_1 = nullptr
        
        while (true)
            void* ecx_1 = *(data_27e7a40 + 0x548)
            
            if (edi_1 != 0)
                edi_1 += 0xb0
            else
                edi_1 = *(ecx_1 + 0x43960)
            
            int32_t eax_3 = *(ecx_1 + 0x43964) * 0xb0 + *(ecx_1 + 0x43960)
            
            if (edi_1 u>= eax_3)
                break
            
            while ((*(edi_1 + 0xac) & 0xffff0000) == 0)
                edi_1 += 0xb0
                
                if (edi_1 u>= eax_3)
                    return result
            
            int32_t eax_5
            
            if (arg3 != 0xffffffff)
                eax_5 = *sub_46b2b0(arg3)
            else
                eax_5 = eax_3 | arg3
            
            if (*(edi_1 + 0x5c) == 2 && *(edi_1 + 0x58) == eax_5)
                result += 1
    else if (arg1 != 3)
    label_424e7a:
        int32_t eax_16 = sub_418a10()
        
        for (int32_t i = sx.d(*(eax_16 + ((arg3 * 0x5a + arg1) << 1) + 0x40)); i != 0xffffffff; 
                i = sx.d(*(eax_16 + ((i * 5 + 0x11d) << 2))))
            result += 1
    else
        void* edx = data_27e7a40
        void* ebx_1 = nullptr
        
        while (true)
            void* ecx_2 = *(edx + 0x548)
            void* edi_2
            
            if (ebx_1 != 0)
                edi_2 = ebx_1 + 0xb0
            else
                edi_2 = *(ecx_2 + 0x43960)
            
            int32_t eax_9 = *(ecx_2 + 0x43964) * 0xb0 + *(ecx_2 + 0x43960)
            
            if (edi_2 u>= eax_9)
                break
            
            while ((*(edi_2 + 0xac) & 0xffff0000) == 0)
                edi_2 += 0xb0
                
                if (edi_2 u>= eax_9)
                    return result
            
            ebx_1 = edi_2
            int32_t ecx_3
            
            if (arg3 != 0xffffffff)
                ecx_3 = *sub_46b2b0(arg3)
                edx = data_27e7a40
            else
                ecx_3 = ecx_2 | arg3
            
            int32_t eax_12 = *(edi_2 + 0x5c)
            
            if (eax_12 == 3 && *(edi_2 + 0x58) == ecx_3)
                result += 1
                continue
            
            if (eax_12 != 0x12 && eax_12 != 0x13)
                continue
            
            void* eax_13 = *(edx + 0x548)
            
            if (eax_13 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (sx.d(*(*(eax_13 + 0x45844) + *(edi_2 + 0x7c) * 0x14 + 0x464)) == arg3)
                result += 1
    
    return result
}

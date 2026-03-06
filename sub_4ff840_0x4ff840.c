// 函数名称: sub_4ff840
// 虚拟地址: 0x4ff840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ff840(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t esi = arg1
    
    if (*(arg3[3] + 0x10) == 8 && arg3[9] == 0)
        sub_4c5870("pField->pDefMap->defType != DT_STRING || pField->defaultValue != 0", &data_83f3d3, 
            "Definition.cpp", 0x3d1, "DefCalcHashField")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if ((arg3[0xa].b & 0x80) == 0)
        if (arg5 != 0)
            int32_t var_18_1 = esi
            int32_t var_1c_1 = *arg3
            int32_t var_20_1 = arg3[1]
            sub_4c5680("          field %s pos %d crc %x")
        
        int32_t i_7 = 4
        int32_t* edx_1 = arg3
        int32_t eax_2 = esi
        int32_t i
        
        do
            eax_2 = eax_2 u>> 8 ^ *(((zx.d(*edx_1) ^ zx.d(eax_2.b)) << 2) + &data_8c0ca0)
            edx_1 += 1
            i = i_7
            i_7 -= 1
        while (i != 1)
        char* esi_4 = arg3[1]
        char* ecx_1 = esi_4
        void* edi_1 = &ecx_1[1]
        
        do
            edx_1.b = *ecx_1
            ecx_1 = &ecx_1[1]
        while (edx_1.b != 0)
        
        void* i_8 = ecx_1 - edi_1
        char* edx_2 = esi_4
        
        if (ecx_1 != edi_1)
            void* i_1
            
            do
                eax_2 = eax_2 u>> 8 ^ *(((zx.d(*edx_2) ^ zx.d(eax_2.b)) << 2) + &data_8c0ca0)
                edx_2 = &edx_2[1]
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
        
        int32_t eax_6 = sub_4ffac0(arg3[3], eax_2, arg4, arg5)
        int32_t i_13 = 4
        void* edi_3 = &arg3[4]
        int32_t eax_8 = sub_4ffac0(arg3[6], eax_6, arg4, arg5)
        int32_t i_2
        
        do
            eax_8 = eax_8 u>> 8 ^ *(((zx.d(*edi_3) ^ zx.d(eax_8.b)) << 2) + &data_8c0ca0)
            edi_3 += 1
            i_2 = i_13
            i_13 -= 1
        while (i_2 != 1)
        int32_t i_9 = i_13 + 4
        void* edx_5 = &arg3[8]
        int32_t i_3
        
        do
            eax_8 = eax_8 u>> 8 ^ *(((zx.d(*edx_5) ^ zx.d(eax_8.b)) << 2) + &data_8c0ca0)
            edx_5 += 1
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
        int32_t i_10 = 4
        void* edx_6 = &arg3[0xa]
        int32_t i_4
        
        do
            eax_8 = eax_8 u>> 8 ^ *(((zx.d(*edx_6) ^ zx.d(eax_8.b)) << 2) + &data_8c0ca0)
            edx_6 += 1
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        int32_t i_11 = 4
        void* edx_7 = &arg3[0xb]
        int32_t i_5
        
        do
            eax_8 = eax_8 u>> 8 ^ *(((zx.d(*edx_7) ^ zx.d(eax_8.b)) << 2) + &data_8c0ca0)
            edx_7 += 1
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        char ecx_7 = (arg3[0xa]).b
        esi = eax_8
        
        if ((ecx_7 & 3) != 0)
            void* ecx_11 = arg3[7]
            
            if (ecx_11 != 0)
                return sub_4ff660(eax_8, edx_7, ecx_11)
            
            sub_4c5870("pField->itemInfo != 0", &data_83f3d3, "Definition.cpp", 0x3e6, 
                "DefCalcHashField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_8
        
        if ((ecx_7 & 0x20) == 0)
            ecx_8 = *(arg3[3] + 0x10)
        
        if ((ecx_7 & 0x20) != 0 || ecx_8 == 0x13 || ecx_8 == 0x14)
            return sub_4ff6e0(arg3[7], eax_8, arg4, arg5)
        
        if (ecx_8 == 6)
            var_8 = arg3[7]
            int32_t i_12 = 4
            int32_t* edx_9 = &var_8
            int32_t i_6
            
            do
                eax_8 = eax_8 u>> 8 ^ *(((zx.d(*edx_9) ^ zx.d(eax_8.b)) << 2) + &data_8c0ca0)
                edx_9 += 1
                i_6 = i_12
                i_12 -= 1
            while (i_6 != 1)
            return eax_8
        
        if (arg3[7] != 0)
            sub_4c5870("pField->itemInfo == 0", &data_83f3d3, "Definition.cpp", 0x3f7, 
                "DefCalcHashField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return esi
}

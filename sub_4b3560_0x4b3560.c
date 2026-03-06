// 函数名称: sub_4b3560
// 虚拟地址: 0x4b3560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b3560(int32_t arg1, void** arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* result = arg4
    void* result = arg4
    int32_t edi = sx.d(*(sx.d(*(arg2 + 0x45a)) + result + 9))
    
    if (*(arg2 + 0x45d) == 0 && (*(result + 0x10) & 0x20) != 0)
        edi = 0
    
    if ((*(result + 0x10) & &__dos_header) != 0)
        result = *arg2
        
        if (result == 0 || (*(result + 0x241c) & 2) == 0)
            edi = 0
    
    if (arg3 s> edi)
        edi = arg3
    
    int32_t esi_1 = 0
    
    if (edi s> 0)
        do
            int16_t ecx_1 = arg2[0x118].w
            
            if (ecx_1 s>= 0x148)
                char const* const var_14 = "Deck is too large!"
                sub_4c5680("error %s")
                sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x457, "add_card_to_deck")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            arg2[0x118].w = ecx_1 + 1
            result = &arg2[sx.d(ecx_1) * 5 + 0x119]
            *(result + 4) = 0
            *(result + 8) = arg4
            *(result + 0xc) = 0xffff
            *(result + 0x12) = 0xffff
            esi_1 += 1
            *result = 0xff
            *(result + 1) = 0xff00
            *(result + 3) = 0
            *(result + 0xe) = 0
            *(result + 0x10) = 0xffff
        while (esi_1 s< edi)
    
    return result
}

// 函数名称: sub_536440
// 虚拟地址: 0x536440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_536440()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    
    if (entry_ebx[0x14] != 0)
        sub_4c5870("!pSoundInstance->mDecoderData", &data_83f3d3, "SoundOgg.cpp", 0x152, 
            "SoundOggReaderOpen")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x2e0)
            esi_1 = esi + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi = *esi_1
    *esi_1 = *edi
    int32_t var_1c = sub_5abfc0(edi, 0, 0x2e0)
    void* ecx_4 = data_8bdf44
    edi[0xb4] = *entry_ebx
    void* edx_3 = data_8bdf48
    void* ecx_5 = data_8bdf4c
    void* edx_4 = data_8bdf50
    edi[0xb5] = 0
    edi[0xb6] = 0
    int128_t* result = sub_660df0(edi, edi, nullptr, 0, ecx_4, edx_3, ecx_5, edx_4)
    
    if (result s>= 0)
        entry_ebx[0x14] = edi
        return result
    
    char* const ecx_7 = *(entry_ebx[1] + 0x20)
    
    if (ecx_7 == 0)
        ecx_7 = &data_83f3d3
    
    int128_t* result_1 = result
    char* const var_14_1 = ecx_7
    sub_4c5680("failed to read ogg %s %d")
    sub_4c5870("Halt", &data_83f3d3, "SoundOgg.cpp", 0x165, "SoundOggReaderOpen")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_566150
// 虚拟地址: 0x566150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_566150(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t* i
    
    if (edi[2] != 4)
        int32_t eax = edi[1]
        
        if (eax != 3)
            if (eax == 0x12)
                sub_508cd0(edi)
                sub_5094d0(edi, 1, 0)
                int32_t* esi_3 = sub_4e71c0(edi)
                int32_t* i_1 = nullptr
                
                if (esi_3[5] s> 0)
                    int32_t var_8_1 = 0
                    
                    do
                        int32_t* edi_3 = esi_3[6] + var_8_1
                        int32_t* ebx_1 = *edi_3
                        
                        if (*ebx_1 != 0)
                            if (ebx_1[7] != 0)
                                sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 
                                    0x32, "AssetCatalogPurgeAsset")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            sub_520bc0(ebx_1)
                            *ebx_1 = 0
                        
                        sub_5094d0(*edi_3, 1, 0)
                        var_8_1 += 0x1c
                        i = i_1 + 1
                        i_1 = i
                    while (i s< esi_3[5])
                    
                    edi = arg1
                
                goto label_566182
            
            char* const edi_4 = edi[8]
            
            if (edi_4 == 0)
                edi_4 = &data_83f3d3
            
            char* const var_1c_1 = edi_4
            sub_4c5680("AtlasMaker: I don't handle this asset type yet %s")
        else
            sub_508cd0(edi)
            sub_5094d0(edi, 1, 0)
        label_566182:
            int32_t edi_1 = edi[2]
            
            if (edi_1 != 4 && edi_1 != 0)
                i.b = 1
                return i
    
    i.b = 0
    return i
}

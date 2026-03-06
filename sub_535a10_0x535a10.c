// 函数名称: sub_535a10
// 虚拟地址: 0x535a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_535a10(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t* eax = *edi
    void* eax_1 = data_30d7388
    int32_t eax_2 = *(eax_1 + 0xc)
    
    if (eax_2 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_4 = sub_4cce80(eax_2)
    sub_4ff3b0(eax_4, eax_1)
    char* edx = sub_5359b0(edi)
    int32_t* esi_2 = eax
    
    if (esi_2 == 0)
        return sub_4fed40(eax_4, data_30d7388)
    
    int32_t eax_6 = *esi_2
    edi[2] = eax_6
    int32_t eax_7 = eax_6 * 0xd0
    int32_t eax_8
    
    if (eax_7 != 0)
        eax_8, edx = sub_4cce80(eax_7)
    else
        eax_8 = 0
    
    edi[3] = eax_8
    int32_t var_18 = 0
    
    if (edi[2] s> 0)
        int32_t var_c_1 = 0
        int32_t var_8_1 = 0
        
        while (true)
            int32_t* esi_4 = esi_2[1] + var_8_1
            int128_t* ebx_2 = edi[3] + var_c_1
            
            if (esi_4[9] != 0)
                sub_4c5870("pSubMesh->subMeshData.vertexBufferHandle == 0", &data_83f3d3, 
                    "StructureImport.cpp", 0x363, "sStructureReimportSubMeshState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (esi_4[0xa] != 0)
                sub_4c5870("pSubMesh->subMeshData.indexBufferHandle == 0", &data_83f3d3, 
                    "StructureImport.cpp", 0x364, "sStructureReimportSubMeshState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_28_2 = *esi_4
            
            if (sub_535950(eax_4, edx) == 0)
                sub_4fe7d0(ebx_2, data_30d7378)
                edx = sub_4fedb0(*esi_4, ebx_2)
                edi = arg1
            else
                edx = sub_4ff3b0(ebx_2, data_30d7378)
            
            var_8_1 += 0x140
            var_c_1 += 0xd0
            int32_t eax_14 = var_18 + 1
            var_18 = eax_14
            
            if (eax_14 s>= edi[2])
                break
            
            esi_2 = eax
    
    return sub_4fed40(eax_4, data_30d7388)
}

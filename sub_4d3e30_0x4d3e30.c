// 函数名称: sub_4d3e30
// 虚拟地址: 0x4d3e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d3e30(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = *arg2
    int32_t* eax_1 = *arg2
    
    if (eax_1 == 0)
        int32_t var_8_1 = arg1
        return sub_4c5680("Missing import data on '%s'")
    
    int32_t edx_1 = *eax_1
    
    if (edx_1 s<= 0)
        return eax_1
    
    int32_t* eax_3 = eax_1[1] + 0x28
    int32_t ecx_2 = 0
    BOOL eax_4
    
    while (true)
        char const* const var_18
        int32_t var_c
        
        if (eax_3[-1] != 0)
            char const* const var_8_2 = "StructureLoad"
            var_c = 0x1b5
            char const* const var_10 = "Structure.cpp"
            char* const var_14 = &data_83f3d3
            var_18 = "pSubMesh->subMeshData.vertexBufferHandle == 0"
        else if (*eax_3 != 0)
            char const* const var_8_3 = "StructureLoad"
            var_c = 0x1b6
            char const* const var_10_1 = "Structure.cpp"
            char* const var_14_1 = &data_83f3d3
            var_18 = "pSubMesh->subMeshData.indexBufferHandle == 0"
        else
            ecx_2 += 1
            eax_3 = &eax_3[0x50]
            
            if (ecx_2 s>= edx_1)
                return eax_3
            
            continue
        
        sub_4c5870(var_18, &data_83f3d3, "Structure.cpp", var_c, "StructureLoad")
        eax_4 = IsDebuggerPresent()
        break
    
    if (eax_4 != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

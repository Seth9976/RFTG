// 函数名称: sub_516fb0
// 虚拟地址: 0x516fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_516fb0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    
    if (arg1[1] != 2)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, "Structure.cpp", 0x550, 
            "StructureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx = *sub_466320(arg1)
    int32_t edi = *(ecx + 0x40)
    int32_t result = 0
    
    if (edi s> 0)
        int32_t* eax_3 = *(ecx + 0x44) + 4
        
        while (true)
            char* edx_1 = arg2
            char* ecx_2 = *eax_3
            int32_t ecx_4
            
            while (true)
                ebx.b = *ecx_2
                char temp0_1 = *edx_1
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_4 = 0
                        break
                    
                    ebx.b = ecx_2[1]
                    char temp3_1 = edx_1[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        ecx_2 = &ecx_2[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_4 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_4 = sbb.d(sbb.d(ecx_2, ecx_2, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_4 == 0)
                return result
            
            result += 1
            eax_3 = &eax_3[3]
            
            if (result s>= edi)
                break
    
    return 0xffffffff
}

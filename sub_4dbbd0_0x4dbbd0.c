// 函数名称: sub_4dbbd0
// 虚拟地址: 0x4dbbd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4dbbd0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result_2 = data_3078594
    int32_t result_2 = data_3078594
    int32_t result_1 = result_2
    
    if (result_2 s<= 1)
        result_1 = 1
    
    int32_t result = result_1
    int32_t var_14 = 0
    
    if (result s> 0)
        int32_t ebx_1 = arg2
        void* var_10_1 = (data_3078590 << 2) + &data_3068588
        
        while (true)
            int32_t eax_1 = *var_10_1
            
            if (eax_1 s< 0 || eax_1 s> data_2de8568)
                sub_4c5870("itemIndex >= 0 && itemIndex <= gDraw3DData.renderItemCount", &data_83f3d3, 
                    "Draw3d.cpp", 0x132, "Draw3DGetInstanceMatrices")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            if (*(eax_1 * 0x180 + 0x27e8568) != 0)
                sub_4c5870("renderItem.renderType == RENDER_ITEM_MESH", &data_83f3d3, "Draw3d.cpp", 
                    0x135, "Draw3DGetInstanceMatrices")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            float var_58[0x11]
            __builtin_memcpy(&var_58, eax_1 * 0x180 + 0x27e8570, 0x40)
            float (* esi_2)[0x11]
            
            if (arg3 != 0x60)
                float var_118[0x10]
                sub_406020(&var_118, 0x27e816c, &var_58)
                float var_98[0x10]
                __builtin_memcpy(&var_98, &var_118, 0x40)
                
                if (arg3 != 0x61)
                    sub_406020(&var_118, 0x27e81ec, &var_98)
                    void var_d8
                    __builtin_memcpy(&var_d8, &var_118, 0x40)
                    
                    if (arg3 != 0x62)
                        sub_4c5870("materialParam == MATERIAL_MATRIX_WORLD_VIEW_PROJ_INSTANCE", 
                            &data_83f3d3, "Draw3d.cpp", 0x149, "Draw3DGetInstanceMatrices")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    esi_2 = &var_d8
                else
                    esi_2 = &var_98
            else
                esi_2 = &var_58
            
            result = result_1
            var_10_1 += 4
            __builtin_memcpy(ebx_1, esi_2, 0x40)
            int32_t ecx_5 = var_14 + 1
            ebx_1 += 0x40
            var_14 = ecx_5
            
            if (ecx_5 s>= result)
                break
            
            continue
    
    return result
}

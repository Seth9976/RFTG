// 函数名称: sub_4e1a70
// 虚拟地址: 0x4e1a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e1a70(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (data_2de8568 == 0)
        return 
    
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0xa35, 
            "RenderItemListDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edx_1 = sub_54b920(2)
    data_30785ac = arg1
    data_27e8444 = 0
    __builtin_memset(0x27e80ac, 0x83fb38, 0x40)
    data_27e8480 = fconvert.s(float.t(1))
    int32_t i = 0
    
    if (data_2de8568 s> 0)
        int32_t edi_1 = 1 << arg1.b
        int32_t var_8_1 = edi_1
        
        do
            int32_t eax_1 = *((i << 2) + &data_3068588)
            
            if ((*(eax_1 * 0x180 + 0x27e86cc) & edi_1) != 0)
                int32_t eax_2 = *(eax_1 * 0x180 + 0x27e8568)
                
                if (eax_2 == 0)
                    edx_1 = sub_4e0f80(i, edx_1, eax_1 * 0x180 + 0x27e8568)
                else
                    if (eax_2 != 1)
                        sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0xa57, "RenderItemListDraw")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    char eax_5
                    eax_5, edx_1 = sub_4e1010(eax_1 * 0x180 + 0x27e8568)
                    
                    if (eax_5 == 0)
                        sub_4e0bb0()
                        edx_1 = sub_4e0dd0()
                        data_3078588 = i
                    
                    edi_1 = var_8_1
                    data_307858c = i - data_3078588 + 1
            
            i += 1
        while (i s< data_2de8568)
    
    sub_4e0bb0()
    int32_t ecx_5 = data_3078594
    
    if (ecx_5 != 0)
        int32_t eax_10 = data_3078590
        int32_t ecx_6
        
        if (eax_10 s>= 0)
            ecx_6 = data_2de8568
        
        if (eax_10 s< 0 || ecx_5 + eax_10 s> ecx_6)
            sub_4c5870(
                "sortIndex >= 0 && sortIndex + gDraw3DData.instancedMeshCount <= gDraw3DData.renderItemCount", 
                &data_83f3d3, "Draw3d.cpp", 0x8d9, "RenderDrawInstancedMeshes")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_11 = *((eax_10 << 2) + &data_3068588)
        
        if (eax_11 s< 0 || eax_11 s> ecx_6)
            sub_4c5870("firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount", 
                &data_83f3d3, "Draw3d.cpp", 0x8dc, "RenderDrawInstancedMeshes")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4db6b0()
        sub_4dbfd0(eax_11 * 0x180 + 0x27e8568)
        data_3078594 = 0
    
    data_30785ac = 5
    sub_54b920(0)
}

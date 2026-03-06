// 函数名称: sub_4e0bb0
// 虚拟地址: 0x4e0bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e0bb0()
{
    // 第一条实际指令: int32_t ecx = data_307858c
    int32_t ecx = data_307858c
    
    if (ecx == 0)
        return 
    
    int32_t eax_1 = data_3078588
    int32_t ecx_1
    
    if (eax_1 s>= 0)
        ecx_1 = data_2de8568
    
    if (eax_1 s< 0 || ecx + eax_1 s> ecx_1)
        sub_4c5870(
            "sortIndex >= 0 && sortIndex + gDraw3DData.batchedQuadGroupCount <= gDraw3DData.renderItemCount", 
            &data_83f3d3, "Draw3d.cpp", 0x896, "RenderDrawQuadBuffers")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* edi_1 = (eax_1 << 2) + &data_3068588
    int32_t eax_2 = *edi_1
    
    if (eax_2 s< 0 || eax_2 s> ecx_1)
        sub_4c5870("firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount", 
            &data_83f3d3, "Draw3d.cpp", 0x899, "RenderDrawQuadBuffers")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4db6b0()
    void* var_10_1 = nullptr
    sub_4dbaf0()
    int32_t esi_1 = data_3068584
    void* esi_2 = (esi_1 << 2) + &data_3068574
    void* var_20_1 = esi_2
    int32_t eax_5 = (*(*data_3078804 + 0x64))(*((esi_1 << 2) + &data_3068574))
    int32_t ebx_4 = 0
    int32_t eax_6 = 0
    int32_t var_8_1 = 0
    int32_t var_c_1 = 0
    int32_t i_1 = 0
    
    if (data_307858c s> 0)
        void* var_18_1 = edi_1
        int32_t i
        
        do
            int32_t edi_2 = *edi_1
            
            if ((*(edi_2 * 0x180 + 0x27e86cc) & 1 << (data_30785ac).b) != 0)
                int32_t esi_5 = *(edi_2 * 0x180 + 0x27e86b0) * 4
                void* ebx_8 = esi_5 * 0x28
                sub_5ab990(eax_5 + eax_6 * 0x28, *(edi_2 * 0x180 + 0x27e86ac) * 0xa0 + 0x2de856c, ebx_8)
                var_10_1 += ebx_8
                var_c_1 += *(edi_2 * 0x180 + 0x27e86b0)
                ebx_4 = var_c_1
                var_8_1 += esi_5
                eax_6 = var_8_1
                esi_2 = var_20_1
            
            i = i_1 + 1
            edi_1 = var_18_1 + 4
            i_1 = i
            var_18_1 = edi_1
        while (i s< data_307858c)
    
    (*(*data_3078804 + 0x68))(*esi_2, var_10_1)
    (*(*data_3078804 + 0x3c))(4, *esi_2, data_3068570, 0xa, ebx_4 * 2, ebx_4 << 2, 0, 0)
    void* eax_14 = data_27e7fe4
    *(eax_14 + 0x1c) += ebx_4
    *(eax_14 + 0x20) += 1
    int32_t eax = (data_3068584 + 1) & 0x80000003
    
    if (eax s< 0)
        eax = ((eax - 1) | 0xfffffffc) + 1
    
    data_3068584 = eax
    data_307858c = 0
}

// 函数名称: sub_4e0dd0
// 虚拟地址: 0x4e0dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e0dd0()
{
    // 第一条实际指令: int32_t ecx_1 = data_3078594
    int32_t ecx_1 = data_3078594
    
    if (ecx_1 == 0)
        return 
    
    int32_t eax_1 = data_3078590
    int32_t ecx
    
    if (eax_1 s>= 0)
        ecx = data_2de8568
    
    if (eax_1 s< 0 || ecx_1 + eax_1 s> ecx)
        sub_4c5870(
            "sortIndex >= 0 && sortIndex + gDraw3DData.instancedMeshCount <= gDraw3DData.renderItemCount", 
            &data_83f3d3, "Draw3d.cpp", 0x8d9, "RenderDrawInstancedMeshes")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax_2 = *((eax_1 << 2) + &data_3068588)
    
    if (eax_2 s< 0 || eax_2 s> ecx)
        sub_4c5870("firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount", 
            &data_83f3d3, "Draw3d.cpp", 0x8dc, "RenderDrawInstancedMeshes")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4db6b0()
    sub_4dbfd0(eax_2 * 0x180 + 0x27e8568)
    data_3078594 = 0
}

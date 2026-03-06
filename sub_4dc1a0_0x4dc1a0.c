// 函数名称: sub_4dc1a0
// 虚拟地址: 0x4dc1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4dc1a0()
{
    // 第一条实际指令: if (data_3078599 == 0)
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x1fb, 
            "RenderItemAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = data_2de8568
    
    if (eax_1 s>= 0x4000)
        sub_4c5870("gDraw3DData.renderItemCount < MAX_RENDER_ITEMS", &data_83f3d3, "Draw3d.cpp", 0x1fd, 
            "RenderItemAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_2de8568 = eax_1 + 1
    sub_5abfc0(eax_1 * 0x180 + 0x27e8568, 0, 0x180)
    *(eax_1 * 0x180 + 0x27e85e8) = data_27e84a8
    *(eax_1 * 0x180 + 0x27e85ec) = data_27e84ac
    *(eax_1 * 0x180 + 0x27e85f0) = data_27e84b0
    *(eax_1 * 0x180 + 0x27e85f4) = data_27e84b4
    *(eax_1 * 0x180 + 0x27e85f8) = data_27e8498
    *(eax_1 * 0x180 + 0x27e85fc) = data_27e849c
    *(eax_1 * 0x180 + 0x27e8600) = data_27e84a0
    *(eax_1 * 0x180 + 0x27e8604) = data_27e84a4
    *(eax_1 * 0x180 + 0x27e8608) = data_27e84b8
    *(eax_1 * 0x180 + 0x27e860c) = data_27e84bc
    *(eax_1 * 0x180 + 0x27e8610) = data_27e84c0
    *(eax_1 * 0x180 + 0x27e8614) = data_27e84c4
    int32_t eax_7
    eax_7.b = data_30785c0
    *(eax_1 * 0x180 + 0x27e86e4) = eax_7.b
    *(eax_1 * 0x180 + 0x27e86d4) = data_27e8484
    *(eax_1 * 0x180 + 0x27e86d8) = data_27e8488
    *(eax_1 * 0x180 + 0x27e86dc) = data_27e848c
    *(eax_1 * 0x180 + 0x27e86e0) = data_27e8490
    *(eax_1 * 0x180 + 0x27e8688) = fconvert.s(fconvert.t(data_27e84c8))
    *(eax_1 * 0x180 + 0x27e868c) = data_27e8540
    *(eax_1 * 0x180 + 0x27e8690) = data_27e8544
    *(eax_1 * 0x180 + 0x27e8694) = data_27e8548
    *(eax_1 * 0x180 + 0x27e8698) = data_27e854c
    *(eax_1 * 0x180 + 0x27e869c) = data_27e8550
    *(eax_1 * 0x180 + 0x27e86a0) = data_27e8554
    *(eax_1 * 0x180 + 0x27e86a4) = data_27e8558
    *(eax_1 * 0x180 + 0x27e86a8) = data_27e855c
    *(eax_1 * 0x180 + 0x27e85d4) = data_27e8468
    *(eax_1 * 0x180 + 0x27e85d8) = data_27e846c
    *(eax_1 * 0x180 + 0x27e85dc) = data_27e8470
    *(eax_1 * 0x180 + 0x27e85e0) = data_27e8474
    *(eax_1 * 0x180 + 0x27e85e4) = data_27e8478
    __builtin_memcpy(eax_1 * 0x180 + 0x27e8658, &data_27e850c, 0x30)
    __builtin_memcpy(eax_1 * 0x180 + 0x27e8618, &data_27e84cc, 0x40)
    *(eax_1 * 0x180 + 0x27e86cc) = data_27e8560
    *(eax_1 * 0x180 + 0x27e86d0) = fconvert.s(fconvert.t(data_27e8564))
    return eax_1 * 0x180 + 0x27e8568
}

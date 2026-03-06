// 函数名称: sub_4dd970
// 虚拟地址: 0x4dd970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4dd970(int32_t* arg1)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        data_27e8498 = *arg1
        data_27e849c = arg1[1]
        data_27e84a0 = arg1[2]
        data_27e84a4 = arg1[3]
        return 
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x2fe, 
        "Draw3DSetMaterialColor")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

// 函数名称: sub_56cd40
// 虚拟地址: 0x56cd40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_56cd40()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    void* eax = sub_4d5500(ecx, data_3079298)
    
    if (eax != 0)
        void* eax_1 = *(eax + 0x2c)
        
        if (eax_1 != 0 && *(eax_1 + 0xc) != 0)
            void* edi = *sub_56f1a0(eax_1 + 4)
            void* eax_5 = *sub_4e7410(data_3079270)
            int32_t ecx_1 = data_307929c
            
            if (ecx_1 s< *(eax_5 + 0x40))
                return fconvert.t(fconvert.s(float.t(**(*(eax_5 + 0x44) + ecx_1 * 0xc + 8) - 1)
                    * fconvert.t(*(edi + 4))))
            
            sub_4c5870(
                "gControlsData.structureAnimClipIndex < defStructure->pStructureImportData->numAnimClips", 
                &data_83f3d3, "Editor\EditorControls.cpp", 0x2a2, "GetAnimationTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return float.t(0)
}

// 函数名称: sub_534b50
// 虚拟地址: 0x534b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_534b50(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x430)
    int32_t edx = *(arg3 + 0x430)
    void* result = nullptr
    
    if (edx s> 0)
        void* ecx = arg3 + 0x434
        
        while (*ecx != arg4)
            result += 1
            ecx += 0x14
            
            if (result s>= edx)
                return result
        
        result = *(ecx + 0xc)
        
        if (*(result + 0x10) != 0xf)
            sub_4c5870("renderState.renderStateType->defType == DT_ASSET_PTR", &data_83f3d3, 
                "Material.cpp", 0x303, "MaterialStateReplaceTexture")
            
            if (IsDebuggerPresent() != 1)
                noreturn sub_4c5a30() __tailcall
            
            breakpoint
        
        *(ecx + 0x10) = arg5
    
    return result
}

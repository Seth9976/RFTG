// 函数名称: sub_536f50
// 虚拟地址: 0x536f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_536f50()
{
    // 第一条实际指令: LRESULT eax
    LRESULT eax
    int32_t edx
    eax, edx = sub_536e40()
    
    if (eax != 0)
        void* eax_1
        eax_1.b = *(sub_531280(eax, edx, &data_8c35ec) + 0x10) == 8
        
        if (eax_1.b != 0)
            LRESULT eax_3 = sub_536e40()
            int32_t* eax_4 = sub_536db0()
            
            if (eax_4 != 0)
                return sub_531070(eax_4, eax_3)
            
            sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0x200, 
                "EditorGetSelectedString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("EditorHasSelectedStringParam()", &data_83f3d3, "Windows\EditorWindow.cpp", 0x1fc, 
        "EditorGetSelectedString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

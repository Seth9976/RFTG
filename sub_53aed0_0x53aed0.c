// 函数名称: sub_53aed0
// 虚拟地址: 0x53aed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_53aed0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t* result = sub_53a0a0(arg2, &var_c, arg1)
    
    if (var_c == 1)
        result = sub_537110()
        
        if (result == 0)
            sub_4c5870("pTrack", &data_83f3d3, "Windows\EditorWindow.cpp", 0x729, 
                "EditorRightButtonDown")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (result[1] != 1)
            int32_t var_20_1 = 0
            int32_t* eax_2
            int32_t ecx_1
            eax_2, ecx_1 = sub_4fff30(data_315f7ec, 0)
            int32_t var_8
            char* ecx_2 = sub_505290(result, eax_2, ecx_1, var_8)
            
            if (data_3078834 s> var_8)
                data_3078834 -= 1
            
            void* eax_4 = data_3079208
            
            if (eax_4 != 0)
                int32_t eax_5 = *(eax_4 + 4)
                
                if (eax_5 == 0x19)
                    int32_t var_20_2 = 0xffffffff
                    return sub_536c00(sub_538a80(0xffffffff))
                
                if (eax_5 == 0x1b)
                    ecx_2 = sub_539d30(0xffffffff)
            
            return sub_536c00(ecx_2)
    
    return result
}

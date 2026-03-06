// 函数名称: sub_541230
// 虚拟地址: 0x541230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_541230(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: if (arg1[1] != 2)
    if (arg1[1] != 2)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, "Structure.cpp", 0x550, 
            "StructureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_1 = sub_466320(arg1)
    *arg3 = 0
    __builtin_strncpy(arg3, "<none>", 7)
    int32_t i = 0
    void* ecx = &arg3[7]
    int32_t i_1 = 0
    
    if (*(eax_1 + 0x30) s> 0)
        int32_t* var_8_1 = nullptr
        
        do
            char* edi_1 = *(var_8_1 + *(eax_1 + 0x2c))
            char* eax_3 = edi_1
            int32_t* edx
            
            do
                edx.b = *eax_3
                eax_3 = &eax_3[1]
            while (edx.b != 0)
            void* eax_4 = eax_3 - &eax_3[1]
            
            if (eax_4 + ecx + 1 u>= &arg3[0x100])
                sub_4c5870("cur + len + 1 < buffer + maxLen", &data_83f3d3, "Windows\EditorWindow.cpp", 
                    0x1328, "GetModelLooks")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_5ab990(ecx, edi_1, eax_4 + 1)
            var_8_1 = &var_8_1[3]
            i = i_1 + 1
            ecx = eax_4 + ecx + 1
            i_1 = i
        while (i s< *(eax_1 + 0x30))
    
    *ecx = 0
    return i
}

// 函数名称: sub_554b30
// 虚拟地址: 0x554b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_554b30(char* arg1, int32_t arg2, int32_t arg3, int32_t** arg4 @ edi)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    char* esi = arg1
    
    while (*esi != 0)
        arg1.b = *esi
        
        if (sx.d(arg1.b) - 0x22 u> 0x1c)
        label_554ba0:
            var_8.b = arg1.b
            
            if (sub_5a9094(&var_8, 1, 1, *arg4) != 1)
                sub_4c5870("resultCount == 1", &data_83f3d3, "XmlWriter.cpp", 0x31, "sXmlEmitChar")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            int32_t* ecx_2 = zx.d(*(sx.d(arg1.b) + 0x554be2))
            
            switch (ecx_2)
                case nullptr
                    int32_t** var_10_4 = arg4
                    sub_554ac0(arg1, "&quot;", ecx_2)
                case 1
                    int32_t** var_10_3 = arg4
                    sub_554ac0(arg1, "&amp;", ecx_2)
                case 2
                    int32_t** var_10_1 = arg4
                    sub_554ac0(arg1, "&lt;", ecx_2)
                case 3
                    int32_t** var_10_2 = arg4
                    sub_554ac0(arg1, "&gt;", ecx_2)
                case 4
                    goto label_554ba0
        
        esi = &esi[1]
}

// 函数名称: sub_554d30
// 虚拟地址: 0x554d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_554d30(int32_t** arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax = arg1[1]
    int32_t eax = arg1[1]
    int32_t* ecx
    int32_t edx
    
    if (eax == 1)
    label_554d7a:
        int32_t** var_c_1 = arg1
        ecx, edx = sub_554ac0(eax, &data_89215c, ecx)
        arg1[1] = 3
    else
        if (eax != 3)
            sub_4c5870(
                "pXmlWriter->mWriterState == XML_WRITE_OPEN_TAG || pXmlWriter->mWriterState == 
                    XML_WRITE_LITERAL", 
                &data_83f3d3, "XmlWriter.cpp", 0xbb, "XmlWriteLiteralString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (eax == 1)
            goto label_554d7a
    
    return sub_554b30(arg2, edx, ecx, arg1)
}

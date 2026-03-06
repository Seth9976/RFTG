// 函数名称: sub_4c87f0
// 虚拟地址: 0x4c87f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c87f0(void* arg1 @ esi)
{
    // 第一条实际指令: while (*(arg1 + 0x44) != 0)
    while (*(arg1 + 0x44) != 0)
        int32_t* eax_1 = *(arg1 + 0x3c)
        
        if (eax_1 == 0)
            sub_4c5870("mpHead != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x53, 
                "XList<struct NetBuffer *>::GetHead")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_2 = *eax_1
        (*(*data_27e7bb4 + 0x10))(*(arg1 + 0x10), eax_2 + 0xfdfc, *(eax_2 + 0xfde8) + eax_2, 
            *(eax_2 + 0xfdec))
        void* eax_6 = sub_4db440(arg1 + 0x3c)
        void* edi_4 = data_27e7bb8
        void* var_8 = eax_6
        sub_518190(edi_4 + 0x44, &var_8)
}
